---
date: 2022-12-29T00:00+03:00
tags:
  - blog
  - base
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 225
---

# Input/Output

> In computing, input/output (I/O, i/o, or informally io or IO) is the
> communication between an information processing system, such as a computer,
> and the outside world, such as another computer system, peripherals, or a
> human operator. Inputs are the signals or data received by the system and
> outputs are the signals or data sent from it. The term can also be used as
> part of an action; to "perform I/O" is to perform an input or output
> operation.
>
> I/O devices are the pieces of hardware used by a human (or other system) to
> communicate with a computer. For instance, a keyboard or computer mouse is an
> input device for a computer, while monitors and printers are output devices.
> Devices for communication between computers, such as modems and network cards,
> typically perform ==both input and output== operations. Any interaction with
> the system by an interactor is an input and the reaction the system responds
> is called the output.\
> — <cite>[Input/output - Wikipedia](https://en.wikipedia.org/wiki/Input/output)</cite> <!--SR:!2024-09-22,18,245-->

==(I/O)== communication between a computer and its users, its storage devices,
other computers (via a network) or the outside world. <!--SR:!2024-10-26,29,237-->

Some examples of I/O operations:
&#10;<br>
- [[HTTP_and_HTTPS_and_TLS|HTTP]] requests (sending/receiving data over network)
- access to [[database]]
- reading/writing [[file|files]]
- [[printf_format_string|Printing]] to screen <!--SR:!2024-09-07,4,236-->

Important aspects of I/O are ==throughput, latency==, and whether the
communications are synchronous or asynchronous (using some kind of buffer). <!--SR:!2024-09-07,5,236-->
