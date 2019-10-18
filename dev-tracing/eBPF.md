
# eBPF

Intro:
https://leezhenghui.github.io/linux/2019/03/05/exploring-usdt-on-linux.html

- By design the eBPF VM and its programs are intentionally not Turing complete
- No unbounded loops, max 4096 instructions
- All memory accesses must be done by first loading data to the eBPF stack before using it in the eBPF program.


![Tracing Tech Stack](https://leezhenghui.github.io/assets/materials/explore-usdt-on-linux/linux-tracing-tracing-tech-stack.png)



- The main data structure used by eBPF programs is the **eBPF map**, a generic data structure that allows data to be passed back and forth within the kernel or between the kernel and user space. As the name "map" implies, data is stored and retrieved using a key.

- Maps are created and manipulated using the bpf() system call. When a map is successfully created, a file descriptor associated with that map is returned. Maps are normally destroyed by closing the associated file descriptor. Each map is defined by four values: a type, a maximum number of elements, a value size in bytes, and a key size in bytes.

- Fortunately, the LLVM Clang compiler has grown support for an eBPF backend that compiles C into bytecode. Object files containing this bytecode can then be directly loaded with the bpf() system call and BPF_PROG_LOAD command.


https://www.iovisor.org/technology/ebpf

eBPF restrictions:
- No custom kernels
- No custom kernel modules
- No kernels with debug symbols
- No reboots

Install - https://github.com/iovisor/bcc/blob/master/INSTALL.md


A program can be attached to:
- kprobes or uprobes
- socket filters
- TAP or RAW (original tcpdump use case)
- PACKET_FANOUT: loadbalance packets to sockets
- seccomp
- tc filters or actions, either ingress or egress


User-space + eBPF:
https://lwn.net/Articles/753601/
Может работать с USDT
`Additional tools in BCC enable USDT probes for popular high-level languages like Java, Python, Ruby, and PHP`

USDT Java:
http://blogs.microsoft.co.il/sasha/2016/12/23/usdtbpf-tracing-tools-java-python-ruby-node-mysql-postgresql/

Binding java to libstapsdt
https://twitter.com/goldshtn/status/932251357251325953


eBPF overview:
https://www.collabora.com/news-and-blog/blog/2019/04/05/an-ebpf-overview-part-1-introduction/

eBPF advantages:
- unified tracing interface for both kernel and userspace
- eBPF can trace everything in a system, it is not limited to a specific application
- performance impact is minimal and doesn't require suspending execution for long periods of time.
- safe VM (vs. SystemTap)
- eBPF is fully programmable (vs. perf/frace)

eBPF disadvantages:
- eBPF is not as portable as other tracers
- requires a fairly recent kernel
- can't easily give as many insights as a language or application-specific userspace debugger
- Because "normal eBPF" runs in the Linux kernel, a kernel-user context switch happens every time eBPF instruments a user process. This can be expensive for debugging performance critical userspace code (perhaps the userspace eBPF VM project can be used to avoid this switch cost?). This context switch is much cheaper than what a normal debugger incurs (or tools like strace), so it's usually negligible, but a tracer capable of fully running in userspace like LTTng may be preferable in this case.
