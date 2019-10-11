# LTTng

Последний релиз сейчас LTTng 2.10 "KeKriek", но есть 2.11-stable.

### Event types
* tracepoints from kernel
* kernel [kprobe](https://www.kernel.org/doc/Documentation/kprobes.txt) and kretprobe kprobes
* kernel system call

В lttng 2.11 есть `--userspace-probe`
[Lttng 2.11 docs](https://github.com/lttng/lttng-docs/blob/master/2.11/lttng-docs-2.11.txt)
[uprobes](https://www.kernel.org/doc/Documentation/trace/uprobetracer.txt)
Но у них нет диско релизов(

Добавить свою прробу можно только в ядро, но можно повеситься на уже существующий ftrace event [kernel tracepoints](https://lttng.org/docs/v2.10/#doc-instrumenting-linux-kernel).
Насколько я поняла, в получение информации из ивента можно положить любой код на си.

#### [Lttng logger](https://lttng.org/docs/v2.10/#doc-proc-lttng-logger-abi)
part of kernel tracing module, every app can generate an event by writting to file `/proc/lttng-logger`
> You should not use the LTTng logger to trace a user application which can be instrumented in a more efficient way

By default only message and its size will be saved.

#### Common info

Создание/удаление `lttng create`, `lttng destroy`.
Начать/остановить `lttng start`, `lttng stop`.
Добавить/убрать `enable-event`, `disable-event`.
Отслеживаемые ивенты могут быть добавлены только перед первым запуском сеесии. `lttng view` показывает все записанные текущие логи, но есть и `babeltrace`.

`$ lttng enable-event --kernel sys_open --probe sys_open+0x0`\
`$ lttng enable-event --kernel sys_close --probe sys_close+0x0`\
В данном примере из статьи у меня не работает создание пробы, так как вывод ошибок в LTTng максимально иформативен
>Error: Event sys_open: Enable kernel event failed (channel channel0, session auto-20191009-022632)

Причина происходящего гуглится очень плохо, но конкретно у меня проблемы была в другом названии проб, которые уже есть в ядре.\
`/sys/kernel/debug/tracing/` содержит разную полезную информацию.\
Например, в `available_events` есть список уже доступных проб, но для репроб непонятно, куда смотреть.

Для парсинга *babeltrace* резутата есть библотека для питона с аналогичным названием.

Список трейспоинтов в ядре `lttng list --kernel`.

Есть библиотека для плюсов для создания своих точек.\
В джаве можно только повеситься на логере.

` lttng enable-event --kernel --userspace-probe=/usr/lib/libc.so.6:malloc libc_malloc`
>/sys/kernel/debug/tracing/uprobe_events, and enable it via
/sys/kernel/debug/tracing/events/uprobes/<EVENT>/enabled.

To create lttng probes and have access to kernel tracepoints you need to be root or user from *tracing* group.\
[Some easy tutorial about group managing](https://www.howtogeek.com/50787/add-a-user-to-a-group-or-second-group-on-linux/)

#### Channels
Cобраная информация пишется в небольшие буферы, при заполнении которые очищаются демоном-сборщиком, но на практике места не всегда может хавать и тогда информация будет утеряна.
[Работа с каналами](https://lttng.org/docs/v2.10/#doc-channel)

Channels can be created only in userspace and kernel domains, others have default single channel.\
A channel is always associated to a tracing domain. The java.util.logging (JUL), log4j, and Python tracing domains each have a default channel which you cannot configure.

Starting from LTTng 2.10, the LTTng user space tracer, LTTng-UST, supports a blocking mode. Blocking mode allow to block application until where no available sub-buffers. Can be specified only in discard mode.
> LTTNG_UST_ALLOW_BLOCKING=1 my-app


## About java tracing
Есть возможность только гененрировать logger:events и фильтровать по полям, например, предлагается по имени логера.
В информации об ивенте уже будут метод, класс и время.
[start](https://lttng.org/blog/2015/05/12/tutorial-java-tracing/)
[about java tracing with loggers](https://lttng.org/blog/2016/07/25/tracing-java-applications-and-tc/)

`javac -cp /usr/share/java/lttng-ust-agent-common.jar:/usr/share/java/lttng-ust-agent-jul.jar Test.java`
`java -cp /usr/share/java/jarpath/lttng-ust-agent-common.jar:/usr/share/java/jarpath/lttng-ust-agent-jul.jar:.`

## Trace compass
Для lttng у трейс компаса есть обертка на [jul](https://help.eclipse.org/2019-09/index.jsp?topic=%2Forg.eclipse.tracecompass.doc.dev%2Fdoc%2FJUL-Logging.html).
[trace viz](https://wiki.eclipse.org/Trace_Compass/News/NewIn21#Flame_graph_view)
Able to build flame graph by call stack.
[LTTng-UST Analyses](http://archive.eclipse.org/tracecompass/doc/stable/org.eclipse.tracecompass.doc.user/LTTng-UST-Analyses.html)
[some pdf](https://www.nxp.com/docs/en/application-note/AN5172.pdf)
[conf pdf](https://www.eclipsecon.org/europe2014/sites/default/files/slides/TraceCompassEclipseConEurope2014_Oct07.pdf)
Мне кажется, технические писатели из эклипса ненавидят людей.
[java logging](http://archive.eclipse.org/tracecompass/doc/stable/org.eclipse.tracecompass.doc.user/Java-Logging.html)

### Sources
[LTTng documentation](https://lttng.org/docs/v2.10/)\
[Статья на хабре](https://habr.com/ru/company/selectel/blog/300966/)\
[Статья с интересными примерами](https://lwn.net/Articles/492296/)\
[About babeltrace format](https://diamon.org/ctf/)\
[Official LTTng tutorials on Youtube](https://www.youtube.com/channel/UCxSUcvYWgMuEBPPHa9xKBYA)
[bpf usdt](https://github.com/goldshtn/linux-tracing-workshop/blob/master/bpf-usdt.md)
[intro to kprobes](https://lwn.net/Articles/132196/)
[lttng on work](https://www.onworks.net/programs/lttng-online)
[about tracing](https://jvns.ca/blog/2017/07/05/linux-tracing-systems/)
##### probes
[kernel probes](https://www.kernel.org/doc/html/v4.17/trace/kprobetrace.html)
[about probes usage](https://lttng.org/docs/v2.10/#doc-instrumenting-linux-kernel-tracing)
[other useful intro](https://blog.selectel.com/deep-kernel-introduction-lttng/)
[kprobes](https://www.kernel.org/doc/Documentation/trace/kprobetrace.txt)
