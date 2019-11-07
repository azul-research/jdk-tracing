#!/usr/bin/python

from __future__ import print_function
from bcc import BPF, USDT

from time import sleep

def create_probe(path, probe_name, probe_func):
    usdt = USDT(path=path)
    usdt.enable_probe(probe_name, probe_func)
    return usdt


library = '/usr/local/jvm/openjdk-14-internal/lib/server/libjvm.so'
probes = [
    create_probe(library, 'method__compile__begin', 'probe_method__compile__begin_1'),
    create_probe(library, 'method__compile__end', 'probe_method__compile__end_1')
]
libpath = BPF.find_library(library)
if libpath is None:
    libpath = BPF.find_exe(library)
if not libpath:
    print('error')

b = BPF(text="""
#include <uapi/linux/ptrace.h>
#include <linux/blkdev.h>
#include <linux/ptrace.h>
#include <linux/sched.h>

typedef struct probe_method__compile__begin_1_data
{
        char class_name[80];
        char method_name[80];
} probe_method__compile__begin_1_data_t;

BPF_HASH(start, probe_method__compile__begin_1_data_t);
BPF_HASH(end, probe_method__compile__begin_1_data_t);

void probe_method__compile__begin_1(struct pt_regs *ctx) {
    probe_method__compile__begin_1_data_t __data = {};
    u64 ts = bpf_ktime_get_ns();
    uint64_t arg3 = 0;
    bpf_usdt_readarg(3, ctx, &arg3);
    if (arg3 != 0) {
        void *__tmp = (void *)arg3;
        bpf_probe_read(&__data.class_name, sizeof(__data.class_name), __tmp);
    }
    uint64_t arg5 = 0;
    bpf_usdt_readarg(5, ctx, &arg5);
    if (arg5 != 0) {
        void *__tmp = (void *)arg5;
        bpf_probe_read(&__data.method_name, sizeof(__data.class_name), __tmp);
    }
    start.update(&__data, &ts);
    // bpf_usdt_readarg(3, ctx, &arg3);
    bpf_trace_printk("Compile begin %llu\\n", ts);
}

void probe_method__compile__end_1(struct pt_regs *ctx) {
    //u64 ts = bpf_ktime_get_ns();
    u64 *tsp, delta;
    probe_method__compile__begin_1_data_t __data = {};
    //u64 ts = bpf_ktime_get_ns();
    uint64_t arg3 = 0;
    bpf_usdt_readarg(3, ctx, &arg3);
    if (arg3 != 0) {
        void *__tmp = (void *)arg3;
        bpf_probe_read(&__data.class_name, sizeof(__data.class_name), __tmp);
    }
    uint64_t arg5 = 0;
    bpf_usdt_readarg(5, ctx, &arg5);
    if (arg5 != 0) {
        void *__tmp = (void *)arg5;
        bpf_probe_read(&__data.method_name, sizeof(__data.class_name), __tmp);
    }
    tsp = start.lookup(&__data);
    if (tsp == 0) {
		bpf_trace_printk("error\\n");
        return;
    }
    bpf_trace_printk("Compile end %llu\\n", *tsp);

    delta = bpf_ktime_get_ns() - *tsp;

    end.update(&__data, &delta);
    start.delete(&__data);
}
""", usdt_contexts=probes)

# recomment for debug
# b.trace_print()
countdown = 100
dist = b.get_table("end")
exiting = 0
while (1):
    try:
        sleep(int(10))
    except KeyboardInterrupt:
        exiting = 1
    for key in dist:
        print('{} | {} -- {}ns'.format(key.class_name, key.method_name, dist[key].value))

    dist.clear()

    countdown -= 1
    if exiting or countdown == 0:
        exit()
