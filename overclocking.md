---
date: 2024-07-12
tags:
  - inbox
sr-due: 2024-08-26
sr-interval: 1
sr-ease: 230
---

# Overclocking

## My temperatures

amdgpu-pci-2d00
edge:         +62.0°C  (crit = +100.0°C, hyst = -273.1°C)
                       (emerg = +105.0°C)
junction:     +83.0°C  (crit = +110.0°C, hyst = -273.1°C)
                       (emerg = +115.0°C)
mem:          +66.0°C  (crit = +100.0°C, hyst = -273.1°C)
                       (emerg = +105.0°C)
PPT:         134.00 W  (cap = 135.00 W)

54/53

## Utilites

- AIDA64
- CPU-Z (classic version) for checking RAM configuration
- GPU-Z for checking GPU connection
- HWiNFO64, for sensor monitoring
- Cinebench
- 3DMark Time Spy (the free version) / Unigine Heaven for general benchmarking
- OCCT, Prime95, FurMark, Cinebench for stress testing
- FurMark
- Memtest86 to test RAM
- testdisk, rlab
- crystal disk info + CrystalDiskMark - hard drive check, shows the smart data
- windows memory diagnostic test
- event viewer and device manager for issues.
- device manager
- bios cpu temp and voltages
- hwmonitor
- dxdiag
- clinfo


## Stress testing with stress-ng

```sh
# В данном тесте задействованы 16 потоков для тестирования 16-поточного
# процессора. Естественно, количество потоков следует задавать в соответствии со
# спецификацией используемого процессора.
stress-ng --cpu 16 --cpu-method matrixprod --metrics --timeout 60

# Для проведения стресс-тестирования накопителей, таких как жёсткие диски, можно
# для начала провести низкоуровневый тест ввода/вывода, данный тест требует
# root-прав:
stress-ng --sequential 0 --class io --timeout 60s --metrics-brief

# Чтобы провести стресс-тест памяти, используйте команду:
stress-ng --sequential 0 --class memory --timeout 60s --metrics-brief

# Если необходимо провести комплексное стресс-тестирование, можно задействовать
# работу нескольких основных подсистем вместе одной командой:
stress-ng --cpu 4 --io 4 --vm 1 --vm-bytes 1G --timeout 60s --metrics-brief
```

## RAM benchmark guide

Highly recommend anyone doing this to run benchmarks to make sure they're
a[](https://www.quora.com/What-are-the-key-performance-parameters-of-RAM)
ctually getting a performance increase. The reason is because when you let the
mobo set the latency CAS by leaving it at AUTO, then it'll push your CAS to
stupid numbers. I mean sure, you might be able to push your 2666 mhz to 3400 mhz
but that nice 16 CAS you were sporting probably jumped up to something
ridiculous. Doesn't do much good if your CL, Trcd, Trp etc are in their 30s.
There's a good chance you're actually killing your performance.

What you can do however is do what is suggested here, up your voltage, up your
frequency and leave everything at AUTO and then run CPU-Z to find out what
timings the board set your sticks at, then go back into the bios and manually
set those numbers, then start bringing them down bit by bit to see if you
actually can get a performance boost to run stable. Remember to run benchmarks
to compare actual performance between settings. Otherwise, you're just guessing
and making assumptions when the reality is, you might actually be making things
slower/worse.

Edit: To pull an example from this video, for his memory to achieve approx the
same performance as his stock (non-overclocked) settings at a frequency of
3400hz, his CAS would have to be at minimum, CAS 22. It's a shame he didn't run
CPU-Z because I'd be willing to bet his mobo set his CAS closer to 28-30+. I
mean, nobody is going to buy 3400mhz memory when their clock numbers are
32,34,34,68.

My advice for "simple" overclocking is to up the voltage by about 0.15 (or even
0.10 if you're running cheapish RAM. It's always better to err on the side of
caution when you're uncertain), leave your frequency alone, go into your
timings, lowering each of them by 1 and reducing your tRAS by about 2 or 3 and
then check for stability. If you can load into Windows, that's a pretty good
sign. If it's stable after running a stress test for a decent amount of time (I
prefer Prime95 for about an hour but OCCT is probably okay too), you have a
successful OC that'll actually be a performance increase. Now you could stop
there and call it good but if you want to try to squeeze more out of your
memory, you can start tightening the clocks one at a time (Starting with your
CAS then going down the line one at a time) until you find a setting that's
unstable, then go back to the last bootable setting and stress test for
stability. Whenever it's unstable, simply back up to the previous setting and
test again, backtracking until you find the most stable setting. Eventually,
you'll find that sweet spot at which point you'll be successfully overclocked
with an actual performance increase.

Now if you want to OC your memory to the absolute best performance, you'll
probably eventually have to mess with boosting the frequency but at that point,
things get way more complicated. Simply leaving things at AUTO is not likely
going to net you any extra performance (and more likely lose you some). This is
why for beginners, I suggest leaving your frequency alone, up your voltage a bit
and see how much you can tighten your timings. I hope this helps.

## Throttling

In [[Linux]] you can use these commands to detect CPU thorottling:

1. Get max frequency, for example 4464000 (4464 MHz).

```bash
# Can be with turbo boost
sudo cat /sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq
```

2. Monitor current frequency, if it is less than max frequency, then
   throttling is happening.

```bash
sudo cat watch 'cat /proc/cpuinfo | grep "cpu MHz"'
```

## External links

- [ ] [Understanding RAM Timings - Hardware Secrets](https://hardwaresecrets.com/understanding-ram-timings/)
- [ ] [What are the key performance parameters of RAM? - Quora](https://www.quora.com/What-are-the-key-performance-parameters-of-RAM)
- [ ] [Memory timings - Wikipedia](https://en.wikipedia.org/wiki/Memory_timings)

- [ ] [Actually Hardcore Overclocking - YouTube](https://youtube.com/@ActuallyHardcoreOverclocking)
- [ ] [SkatterBencher - Simple Overclocking Guides](https://skatterbencher.com/)
- [ ] [Ryzen 5600G с графикой VEGA 7. - YouTube](https://www.youtube.com/watch?v=nvz80thkN14)
- [ ] [Crucial 32GB (2x16GB) 3200MHz CL16 OVERCLOCKING HELP.](https://www.reddit.com/r/overclocking/comments/113xo0y/crucial_32gb_2x16gb_3200mhz_cl16_overclocking_help/)
- [ ] [Тайминги оперативной памяти: как узнать и настроить | Moon.kz](https://moon.kz/blog/taymingi-operativnoy-pamyati/)
- [ ] [The CAS latency timing doesn't matter as much as you think it does - YouTube](https://www.youtube.com/watch?v=pgb8N23tsfA)
- [ ] [Demystifying Memory Overclocking on Ryzen: OC Guidelines and Explaining Subtimings, Resistances, Voltages, and More!](https://www.reddit.com/r/overclocking/comments/ahs5a2/demystifying_memory_overclocking_on_ryzen_oc/)
- [ ] [ECC Memory & AMD’s Ryzen – A Deep Dive - Hardware Canucks](https://hardwarecanucks.com/cpu-motherboard/ecc-memory-amds-ryzen-deep-dive/)
- [ ] [Identify damaged files - ArchWiki](https://wiki.archlinux.org/title/Identify_damaged_files)
- [ ] [Overclocked ECC memory with a 5900X my results and other observations  rAmd](https://www.reddit.com/r/Amd/comments/lf3i6b/overclocked_ecc_memory_with_a_5900x_my_results/)
- [ ] [Бенчмарки для Linux-серверов 5 открытых инструментов  Habr](https://habr.com/en/companies/1cloud/articles/455834/)

