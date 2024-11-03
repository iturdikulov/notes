---
date: 2024-02-11
external: https://www.youtube.com/watch?v=7J7X7aZvMXQ
author: Branch Education
tags:
  - inbox
sr-due: 2024-07-02
sr-interval: 1
sr-ease: 220
---
# Branch Education - How does Computer Memory Work?

![How does Computer Memory Work?](https://www.youtube.com/watch?v=7J7X7aZvMXQ)\
_How does Computer Memory Work?_

Local [file](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4).

- [0:00:20](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Copy data (files) from SSD into DRAM
- [0:00:40](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  CPU working only with DRAM data (main or working memory)
- [0:00:54](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Reason why we have 2 types of data, is because we need long time storage
  devices and DRAM not support that, but it works much faster. So perfectly we
  need fast storage which can store data long time (maybe in future).
- [0:01:25](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  SSD R/W = 1ms, DRAM R/W = 1ns (3000x faster)
- [0:02:42](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Prefetch some data, to speed up some operations
- [0:04:15](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Different types of DRAM
- [0:04:58](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Cache Memory and Registers (fastest memory)
- [0:06:15](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Stick of DRAM also known as Dual Inline Memory Module (DIMM)
- [0:06:30](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Double Data Rate 5 Synchronous Dynamic Random-Access Memory (DDR5 SDRAM) DRAM
  connected to CPU with 2 memory channels (current case) CPU 🔃 [-----] |
  Channel A, Slot 0 [-----] | Channel A, Slot 1 [-----] | Channel B, Slot 0
  [-----] | Channel B, Slot 1
- [0:06:43](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  DRAM Interface (controller to manage and communicate with DRAM)
- [0:06:54](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  M2 / SATA SSD interface
- [0:07:04](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Data Mapping Table used to manage data floating (SSD, DRAM, cache, registers,
  etc.)
- [0:07:19](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  We have 2 channel (A and B), each have 32 bit bus to transfer data, 21 bit bus
  to read/write address, 7 bit control signal bus.
  > Each DDR5 DIMM has two independent channels. Earlier DIMM generations
  > featured only a single channel and one CA (Command/Address) bus controlling
  > the whole memory module with its 64 (for non-ECC) or 72 (for ECC) data
  > lines. Both subchannels on a DDR5 DIMM each have their own CA bus,
  > controlling 32 bits for non-ECC memory and either 36 or 40 data lines for
  > ECC memory, resulting in a total number of either 64, 72 or 80 data lines.
  > The reduced bus width is compensated by a doubled minimum burst length of
  > 16, which preserves the minimum access size of 64 bytes, which matches the
  > cache line size used by modern x86 microprocessors.\
  > — <cite> [Wikipedia](https://en.wikipedia.org/wiki/DDR5_SDRAM)</cite>
- [0:08:02](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  Each chip of DRAM can read/write only 8 bit (we have 4 chips per channel)
- [0:08:08](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  DRAM also have Power Management Chips
- [0:08:16](file:///home/inom/Computer/hardware/visualization/how_does_computer_memory_work_7J7X7aZvMXQ.mp4)
  DRAM chip structure
