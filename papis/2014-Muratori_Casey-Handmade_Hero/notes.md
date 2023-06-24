---
title: "Handmade Hero"
tags:
  - "inbox"
  - "research"
  - "code-tip"
author: "Casey Muratori"
canonicalUrl: "https://hero.handmade.network/episode/code"
citekey: "CaseyMuratoriHandmadeHero2014"
cloudLibrary: "http://zotero.org/users/9108355/items/MFMSWR7F"
date: 2014
dateAdded: 1677686400
draft: true
localLibrary: "zotero://select/items/1_MFMSWR7F"
sr-due: 1678809600
sr-ease: 230
sr-interval: 2
---

> A limbless child receives a magical gift that allows him to set off on the adventure he always dreamed of.

## [Intro to C](https://hero.handmade.network/episode/intro-to-c)

In this intro Casey explains what is C, how to compile and run C program, and how to use [[debugger]].


Can you explain in simple words what is to declare memory?
?
Declare memory is sort of asking space for some data. Something like when you initialize array with some size.

Assignment in programming, is basically ==copy from one place to another==.

What is Assembly commands?
?
Assembly commands is sort of mnemonics of actual processor commands.
https://www.quora.com/What-do-you-mean-by-mnemonics-codes-and-machine-codes-and-what-are-its-purposes

What fundamentally computer CPU is?
?
Fundamentally, a computer CPU is a group of electronic circuits that can perform a certain set of mathematical functions. These circuits fetch an instruction value from and (depending on the value), activate another set of circuits to perform a specific function. Each instruction is a number that tells the CPU which circuits to activate.

Machine code is the ==set of numbers== that the CPU actually executes.

Mnemonics are words that represent ==machine code== in a more human-readable way, so that programmers can more easily write and understand programs.

`al` in `mov` command means?::`%al` refers to the low byte of the `%ax` register.

Can you explain what this code do `byte ptr[Test], 0FFh`
?
Instruction `byte ptr[Test], 0FFh` is telling the assembler to allocate one byte of memory at the address represented by the label Test.
And this is variable declaration (TODO: test it).

What assembler mnemonic here will be used?
```
Test = 255;
00007FF785473A01  mov         byte ptr[Test], 0FFh
```
?
Move constant to some place of memory.

What 2 computer parts really matter in programming. One used to manipulate data, second used to process data.::CPU and Memory.

What are we actually programming, when we write some code?::CPU itself is a thing, which we're actually programming.

What is deterministic algorithm, in simple words?
?
**In computer science, a deterministic algorithm is an algorithm that, given a particular input, will always produce the same output**, with the underlying machine always passing through the same sequence of states. Deterministic algorithms are by far the most studied and familiar kind of algorithm, as well as one of the most practical, since they can be run on real machines efficiently.
Formally, a deterministic algorithm computes a mathematical function; a function has a unique value for any input in its domain, and the algorithm is a process that produces this particular value as output. 

In computing, an **operand** is?
?
It's the part of a computer instruction which specifies what data is to be manipulated or operated on, while at the same time representing the data itself.
A computer instruction describes an operation such as add or multiply X, while the operand (or operands, as there can be more than one) specify on which X to operate as well as the value of X.
Additionally, in assembly language, an **operand** is a value (an argument) on which the instruction, named by mnemonic, operates. The operand may be a processor register, a memory address, a literal constant, or a label. A simple example (in the x86 architecture) is
`MOV DS, AX`
where the value in register operand `AX` is to be moved (`MOV`) into register `DS`. Depending on the instruction, there may be zero, one, two, or more operands. 

Difference between little endian and big endian.
?
Endianness is the order of sequence of bytes in computer memory.
- `little-endian` (LE) the **least significant** part of the number is stored first.
- `big-endian` (BE) is more like natural order of bytes sequence, **most significant** part of the number is stored first.
Now days LE order is **dominating** in various architectures.

Is compiler always tries to compact data structures?::No, it can be wider than needed, reason optimizations.
<!--SR:!2023-03-08,4,270-->
Compiler tries to reduce memory calls, etc.
But you can use `#pragma` to customize packing optimizations.

What is Data structure alignment?
?
Data structure alignment is the way data is arranged and accessed in computer memory. It consists of three separate but related issues: data alignment, data structure padding, and packing.
The CPU in modern computer hardware performs reads and writes to memory most efficiently when the data is _naturally aligned_, which generally means that the data's memory address is a multiple of the data size. For instance, in a 32-bit architecture, the data may be aligned if the data is stored in four consecutive bytes and the first byte lies on a 4-byte boundary.

==Data alignment== is the aligning of elements according to their natural alignment.
<!--SR:!2023-03-05,1,230-->

To ensure natural alignment, it may be necessary to insert some ==padding== between structure elements or after the last element of a structure.

Implicit Type Conversion example - `==printf("%c", x);==, use implicit conversion in printf function.`

Explicit Type Conversion (casting) - `==(data_type)expression;==`

What is Page (computer memory)?
?
A **page**, **memory page**, or **virtual page** is a fixed-length contiguous block of virtual memory, described by a single entry in the page table. It is the smallest unit of data for memory management in a virtual memory operating system. Similarly, a **page frame** is the smallest fixed-length contiguous block of physical memory into which memory pages are mapped by the operating system.
A transfer of pages between main memory and an auxiliary store, such as a hard disk drive, is referred to as paging or swapping.

What is Page fault?
?
In computing, a **page fault** (sometimes called **PF** or **hard fault**) is an exception that the memory management unit (MMU) raises when a process accesses a memory page without proper preparations. Accessing the page requires a mapping to be added to the process's virtual address space.

A **CPU cache** is a?::Hardware cache used by the central processing unit (CPU) of a computer to reduce the average cost (time or energy) to access data from the main memory.

Many modern desktops, server, and industrial CPUs have at least three independent caches:
?
"**Instruction cache**" - Used to speed up executable instruction fetch
"**Data cache**" - Used to speed up data fetch and store; the data cache is usually organized as a hierarchy of more cache levels (L1, L2, etc.; see also multi-level caches below).
"**Translation lookaside buffer (TLB)**" - Used to speed up virtual-to-physical address translation for both executable instructions and data. A single TLB can be provided for access to both instructions and data, or a separate Instruction TLB (ITLB) and data TLB (DTLB) can be provided. However, the TLB cache is part of the memory management unit (MMU) and not directly related to the CPU caches.

Main difference between while-loop and do-while-loop?::Do-while loop execute only once.
How write do-while-loop using only while loop?
?
```c
while(1)
{
   ...
   if (condition)
   {
     break;
   }
}
```
<!--SR:!2023-03-07,3,250-->

What's wrong with this code (specific case logic)?
```c
    int x = 0;
    switch (x) {
    case 0:
        OutputDebugStringA(""case 0"");
    case 1:
        OutputDebugStringA(""case 1"");
    case 2:
        OutputDebugStringA(""case 2"");
    case 3:
        OutputDebugStringA(""case 3"");
    case 4:
        OutputDebugStringA(""case 4"");
    case 5:
        OutputDebugStringA(""case 5"");
    case 6:
        OutputDebugStringA(""case 6"");
    default:
        OutputDebugStringA(""default"");
    }
```
?
Switch just jump to code, and continue execution blocks
This logic usually is not expected. And you need place break; statements in each case!

What are `{}` blocks in C?
?
This blocks (`block` or `compound statement`) basically are base logical part of program, which used to group code.
This block usually used in control statements and loops.
Variables declared in block are local and not available out of block.
In computer programming, a `block` or `code block` or `block of code` is a lexical structure of source code which is grouped together. Blocks consist of one or more declarations and statements. A programming language that permits the creation of blocks, including blocks nested within other blocks, is called a block-structured programming language. Blocks are fundamental to structured programming, where control structures are formed from blocks.

What dereference operator (indirection operator) `*` do?
?
It's used to get value of variable at the pointer address. It can be used to output value of referencing or even set its value.

## [Day 001: Setting Up the Windows Build](https://hero.handmade.network/episode/code/day001/)

Compiler - partially compile source code into executable (exe file usually)
Linker - gather all that executable code (from compiler) into executable

`subst` - command to create virtual disk from some directory

## [Day 001qa: Setting Up the Windows Build - Q&A](https://hero.handmade.network/episode/code/day001qa/)

## [Day 002: Opening a Win32 Window](https://hero.handmade.network/episode/code/day002/)

Usually items in struct is sequentially stored With alignment.

In C to use struct need define it first, but you can use `typedef` to define it
and use it at the same time.

A lot of questions. There deep WINAPI integration, I propably need to rewatch this intro, too many unknown stuff. And I also check MSDN docs and of course QA session (first).

We use ansi winapi functions.

for(;;) used instead of while(1) to remove some warnings, looks like it's more convential way to create infinity loop

TODO: sticky heading plugin -> need move into win
TODO: watch debugger video, maybe automatic debugger attach on compile?
obsidian
TODO: need to understand masking in C better (&/etc), here was good video in Russian

## [Day 002qa: Opening a Win32 Window - Q&A](https://hero.handmade.network/episode/code/day002qa/)

## [Day 003: Allocating a Back Buffer](https://hero.handmade.network/episode/code/day003/)

## [Day 004: Animating the Back Buffer](https://hero.handmade.network/episode/code/day004/)

## [Day 005: Windows Graphics Review](https://hero.handmade.network/episode/code/day005/)

## [Day 006: Gamepad and Keyboard Input](https://hero.handmade.network/episode/code/day006/)

## [Day 007: Initializing DirectSound](https://hero.handmade.network/episode/code/day007/)

## [Day 008: Writing a Square Wave to DirectSound](https://hero.handmade.network/episode/code/day008/)

## [Day 009: Variable-Pitch Sine Wave Output](https://hero.handmade.network/episode/code/day009/)

## [Day 010: QueryPerformanceCounter and RDTSC](https://hero.handmade.network/episode/code/day010/)
# [Day 011: The Basics of Platform API Design](https://hero.handmade.network/episode/code/day011/)

[Making Graphics Portable](https://davidgow.net/handmadepenguin/ch11.html)

# [Day 012: Platform-independent Sound Output](https://hero.handmade.network/episode/code/day012/)

[Platform-indpendent Sound Output](https://davidgow.net/handmadepenguin/ch12.html)

# [Day 013: Platform-independent User Input](https://hero.handmade.network/episode/code/day013/)

[Platform-indpendent User Input](https://davidgow.net/handmadepenguin/ch13.html)

# [Day 014: Platform-independent Game Memory](https://hero.handmade.network/episode/code/day014/)

[A Trip Down Memory Lane](https://davidgow.net/handmadepenguin/ch14.html)

# [Day 015: Platform-independent Debug File I/O](https://hero.handmade.network/episode/code/day015/)

[Platform-independent Debug File I/O](https://davidgow.net/handmadepenguin/ch15.html)

# [Day 016: VisualStudio Compiler Switches](https://hero.handmade.network/episode/code/day016/)

[Bits and Pieces](https://davidgow.net/handmadepenguin/ch16.html)

# [Day 017: Unified Keyboard and Gamepad Input](https://hero.handmade.network/episode/code/day017/)

[Unified Keyboard and Gamepad Input](https://davidgow.net/handmadepenguin/ch17.html)

# [Day 018: Enforcing a Video Frame Rate](https://hero.handmade.network/episode/code/day018/)

[Enforcing a Video Frame Rate](https://davidgow.net/handmadepenguin/ch18.html)

# [Day 019: Improving Audio Synchronization](https://hero.handmade.network/episode/code/day019/)

[Improving Audio Synchronisation](https://davidgow.net/handmadepenguin/ch19.html)

# [Day 020: Debugging the Audio Sync](https://hero.handmade.network/episode/code/day020/)

# [Day 021: Loading Game Code Dynamically](https://hero.handmade.network/episode/code/day021/)

# [Day 022: Instantaneous Live Code Editing](https://hero.handmade.network/episode/code/day022/)

# [Day 023: Looped Live Code Editing](https://hero.handmade.network/episode/code/day023/)

# [Day 024: Win32 Platform Layer Cleanup](https://hero.handmade.network/episode/code/day024/)

# [Day 025: Finishing the Win32 Prototyping Layer](https://hero.handmade.network/episode/code/day025/)

# [Day 026: Introduction to Game Architecture](https://hero.handmade.network/episode/code/day026/)

# [Day 027: Exploration-based Architecture](https://hero.handmade.network/episode/code/day027/)

# [Day 028: Drawing a Tile Map](https://hero.handmade.network/episode/code/day028/)

# [Day 029: Basic Tile Map Collision Checking](https://hero.handmade.network/episode/code/day029/)

# [Day 030: Moving Between Tile Maps](https://hero.handmade.network/episode/code/day030/)

# [Day 031: Tilemap Coordinate Systems](https://hero.handmade.network/episode/code/day031/)

# [Day 032: Unified Position Representation](https://hero.handmade.network/episode/code/day032/)

# [Day 033: Virtualized Tile Maps](https://hero.handmade.network/episode/code/day033/)

# [Day 034: Tile Map Memory](https://hero.handmade.network/episode/code/day034/)

# [Day 035: Basic Sparse Tilemap Storage](https://hero.handmade.network/episode/code/day035/)

# [Day 036: Loading BMPs](https://hero.handmade.network/episode/code/day036/)

# [Day 037: Basic Bitmap Rendering](https://hero.handmade.network/episode/code/day037/)

# [Day 038: Basic Linear Bitmap Blending](https://hero.handmade.network/episode/code/day038/)

# [Day 039: Basic Bitmap Rendering Cleanup](https://hero.handmade.network/episode/code/day039/)

# [Day 040: Cursor Hiding and Fullscreen Support](https://hero.handmade.network/episode/code/day040/)

# [Day 041: Overview of the Types of Math Used in Games](https://hero.handmade.network/episode/code/day041/)

# [Day 042: Basic 2D Vectors](https://hero.handmade.network/episode/code/day042/)

# [Day 043: The Equations of Motion](https://hero.handmade.network/episode/code/day043/)

# [Day 044: Reflecting Vectors](https://hero.handmade.network/episode/code/day044/)

# [Day 045: Geometric vs. Temporal Movement Search](https://hero.handmade.network/episode/code/day045/)

# [Day 046: Basic Multiplayer Support](https://hero.handmade.network/episode/code/day046/)

# [Day 047: Vector Lengths](https://hero.handmade.network/episode/code/day047/)

# [Day 048: Line Segment Intersection Collisions](https://hero.handmade.network/episode/code/day048/)

# [Day 049: Debugging Canonical Coordinates](https://hero.handmade.network/episode/code/day049/)

# [Day 050: Basic Minkowski-based Collision Detection](https://hero.handmade.network/episode/code/day050/)

# [Day 051: Separating Entities By Update Frequency](https://hero.handmade.network/episode/code/day051/)

# [Day 052: Entity Movement in Camera Space](https://hero.handmade.network/episode/code/day052/)

# [Day 053: Environment Elements as Entities](https://hero.handmade.network/episode/code/day053/)

# [Day 054: Removing the Dormant Entity Concept](https://hero.handmade.network/episode/code/day054/)

# [Day 055: Hash-based World Storage](https://hero.handmade.network/episode/code/day055/)

# [Day 056: Switch from Tiles to Entities](https://hero.handmade.network/episode/code/day056/)

# [Day 057: Spatially Partitioning Entities](https://hero.handmade.network/episode/code/day057/)

# [Day 058: Using the Spatial Partition](https://hero.handmade.network/episode/code/day058/)

# [Day 059: Adding a Basic Familiar Entity](https://hero.handmade.network/episode/code/day059/)

# [Day 060: Adding Hitpoints](https://hero.handmade.network/episode/code/day060/)

# [Day 061: Adding a Simple Attack](https://hero.handmade.network/episode/code/day061/)

# [Day 062: Basic Moving Projectiles](https://hero.handmade.network/episode/code/day062/)

# [Day 063: Simulation Regions](https://hero.handmade.network/episode/code/day063/)

# [Day 064: Mapping Entity Indexes to Pointers](https://hero.handmade.network/episode/code/day064/)

# [Day 065: Finishing the Simulation Region Change](https://hero.handmade.network/episode/code/day065/)

# [Day 066: Adding Support for Non-spatial Entities](https://hero.handmade.network/episode/code/day066/)

# [Day 067: Making Updates Conditional](https://hero.handmade.network/episode/code/day067/)

# [Day 068: Exact Enforcement of Maximum Movement Distances](https://hero.handmade.network/episode/code/day068/)

# [Day 069: Pairwise Collision Rules](https://hero.handmade.network/episode/code/day069/)

# [Day 070: Exploration To-do List](https://hero.handmade.network/episode/code/day070/)

# [Day 071: Converting to Full 3D Positioning](https://hero.handmade.network/episode/code/day071/)

# [Day 072: Proper 3D Inclusion Tests](https://hero.handmade.network/episode/code/day072/)

# [Day 073: Temporarily Overlapping Entities](https://hero.handmade.network/episode/code/day073/)

# [Day 074: Moving Entities Up and Down Stairwells](https://hero.handmade.network/episode/code/day074/)

# [Day 075: Conditional Movement Based on Step Heights](https://hero.handmade.network/episode/code/day075/)

# [Day 076: Entity Heights and Collision Detection](https://hero.handmade.network/episode/code/day076/)

# [Day 077: Entity Ground Points](https://hero.handmade.network/episode/code/day077/)

# [Day 078: Multiple Collision Volumes Per Entity](https://hero.handmade.network/episode/code/day078/)

# [Day 079: Defining the Ground](https://hero.handmade.network/episode/code/day079/)

# [Day 080: Handling Traversables in the Collision Loop](https://hero.handmade.network/episode/code/day080/)

# [Day 081: Creating Ground with Overlapping Bitmaps](https://hero.handmade.network/episode/code/day081/)

# [Day 082: Caching Composited Bitmaps](https://hero.handmade.network/episode/code/day082/)

# [Day 083: Premultiplied Alpha](https://hero.handmade.network/episode/code/day083/)

# [Day 084: Scrolling Ground Buffer](https://hero.handmade.network/episode/code/day084/)

# [Day 085: Transient Ground Buffers](https://hero.handmade.network/episode/code/day085/)

# [Day 086: Aligning Ground Buffers to World Chunks](https://hero.handmade.network/episode/code/day086/)

# [Day 087: Seamless Ground Textures](https://hero.handmade.network/episode/code/day087/)

# [Day 088: Push Buffer Rendering](https://hero.handmade.network/episode/code/day088/)

# [Day 089: Renderer Push Buffer Entry Types](https://hero.handmade.network/episode/code/day089/)

# [Day 090: Bases Part I](https://hero.handmade.network/episode/code/day090/)

# [Day 091: Bases Part II](https://hero.handmade.network/episode/code/day091/)

# [Day 092: Filling Rotated and Scaled Rectangles](https://hero.handmade.network/episode/code/day092/)

# [Day 093: Textured Quadrilaterals](https://hero.handmade.network/episode/code/day093/)

# [Day 094: Converting sRGB to Light-linear Space](https://hero.handmade.network/episode/code/day094/)

# [Day 095: Gamma-correct Premultiplied Alpha](https://hero.handmade.network/episode/code/day095/)

# [Day 096: Introduction to Lighting](https://hero.handmade.network/episode/code/day096/)

# [Day 097: Adding Normal Maps to the Pipeline](https://hero.handmade.network/episode/code/day097/)

# [Day 098: Normal Map Code Cleanup](https://hero.handmade.network/episode/code/day098/)

# [Day 099: Test Enviroment Maps](https://hero.handmade.network/episode/code/day099/)

# [Day 100: Reflection Vectors](https://hero.handmade.network/episode/code/day100/)

# [Day 101: The Inverse and the Transpose](https://hero.handmade.network/episode/code/day101/)

# [Day 102: Transforming Normals Properly](https://hero.handmade.network/episode/code/day102/)

# [Day 103: Card-like Normal Map Reflections](https://hero.handmade.network/episode/code/day103/)

# [Day 104: Switching to Y-is-up Render Targets](https://hero.handmade.network/episode/code/day104/)

# [Day 105: Cleaning Up the Renderer API](https://hero.handmade.network/episode/code/day105/)

# [Day 106: World Scaling](https://hero.handmade.network/episode/code/day106/)

# [Day 107: Fading Z Layers](https://hero.handmade.network/episode/code/day107/)

# [Day 108: Perspective Projection](https://hero.handmade.network/episode/code/day108/)

# [Day 109: Resolution-Independent Rendering](https://hero.handmade.network/episode/code/day109/)

# [Day 110: Unprojecting Screen Boundaries](https://hero.handmade.network/episode/code/day110/)

# [Day 111: Resolution-Independent Ground Chunks](https://hero.handmade.network/episode/code/day111/)

# [Day 112: A Mental Model of CPU Performance](https://hero.handmade.network/episode/code/day112/)

# [Day 113: Simple Performance Counters](https://hero.handmade.network/episode/code/day113/)

# [Day 114: Preparing a Function for Optimization](https://hero.handmade.network/episode/code/day114/)

# [Day 115: SIMD Basics](https://hero.handmade.network/episode/code/day115/)

# [Day 116: Converting Math Operations to SIMD](https://hero.handmade.network/episode/code/day116/)

# [Day 117: Packing Pixels for the Framebuffer](https://hero.handmade.network/episode/code/day117/)

# [Day 118: Wide Unpacking and Masking](https://hero.handmade.network/episode/code/day118/)

# [Day 119: Counting Intrinsics](https://hero.handmade.network/episode/code/day119/)

# [Day 120: Measuring Port Usage with IACA](https://hero.handmade.network/episode/code/day120/)

# [Day 121: Rendering in Tiles (Marathon)](https://hero.handmade.network/episode/code/day121/)

# [Day 122: Introduction to Multithreading](https://hero.handmade.network/episode/code/day122/)

# [Day 123: Interlocked Operations](https://hero.handmade.network/episode/code/day123/)

# [Day 124: Memory Barriers and Semaphores](https://hero.handmade.network/episode/code/day124/)

# [Day 125: Abstracting the Work Queue](https://hero.handmade.network/episode/code/day125/)

# [Day 126: Circular FIFO Work Queue](https://hero.handmade.network/episode/code/day126/)

# [Day 127: Aligning Rendering Memory](https://hero.handmade.network/episode/code/day127/)

# [Day 128: Push-time Transforms](https://hero.handmade.network/episode/code/day128/)

# [Day 129: Adding Orthographic Projection](https://hero.handmade.network/episode/code/day129/)

# [Day 130: Seamless Bilinear Tiling](https://hero.handmade.network/episode/code/day130/)

# [Day 131: Asynchronous Ground Chunk Composition](https://hero.handmade.network/episode/code/day131/)

# [Day 132: Asset Streaming](https://hero.handmade.network/episode/code/day132/)

# [Day 133: Preliminary Asset Structuring](https://hero.handmade.network/episode/code/day133/)

# [Day 134: Mapping Assets to Bitmaps](https://hero.handmade.network/episode/code/day134/)

# [Day 135: Typed Asset Arrays](https://hero.handmade.network/episode/code/day135/)

# [Day 136: Tag-based Asset Retrieval](https://hero.handmade.network/episode/code/day136/)

# [Day 137: Matching Periodic Tags](https://hero.handmade.network/episode/code/day137/)

# [Day 138: Loading WAV Files](https://hero.handmade.network/episode/code/day138/)

# [Day 139: Introduction to Sound Mixing](https://hero.handmade.network/episode/code/day139/)

# [Day 140: Implemented a Sound Mixer](https://hero.handmade.network/episode/code/day140/)

# [Day 141: Streaming Large Audio in Chunks](https://hero.handmade.network/episode/code/day141/)

# [Day 142: Per-sample Volume Interpolation](https://hero.handmade.network/episode/code/day142/)

# [Day 143: Pitch Shifting in the Mixer](https://hero.handmade.network/episode/code/day143/)

# [Day 144: SSE Mixer Pre and Post Loops](https://hero.handmade.network/episode/code/day144/)

# [Day 145: SSE Mixer Main Loop](https://hero.handmade.network/episode/code/day145/)

# [Day 146: Accumulation vs. Explicit Calculation](https://hero.handmade.network/episode/code/day146/)

# [Day 147: Defining the Asset File](https://hero.handmade.network/episode/code/day147/)

# [Day 148: Writing the Asset File Header](https://hero.handmade.network/episode/code/day148/)

# [Day 149: Writing Assets to the Asset File](https://hero.handmade.network/episode/code/day149/)

# [Day 150: Loading Assets from the Asset File](https://hero.handmade.network/episode/code/day150/)

# [Day 151: New Platform File API](https://hero.handmade.network/episode/code/day151/)

# [Day 152: New Win32 File API Implementation](https://hero.handmade.network/episode/code/day152/)

# [Day 153: Merging Multiple Asset Files](https://hero.handmade.network/episode/code/day153/)

# [Day 154: Finding Assets Files with Win32](https://hero.handmade.network/episode/code/day154/)

# [Day 155: Introduction to Particle Systems](https://hero.handmade.network/episode/code/day155/)

# [Day 156: Lagrangian vs. Eulerian Simulation](https://hero.handmade.network/episode/code/day156/)

# [Day 157: Introduction to General Purpose Allocation](https://hero.handmade.network/episode/code/day157/)

# [Day 158: Tracking Asset Usage](https://hero.handmade.network/episode/code/day158/)

# [Day 159: Cleaning Up the Loaded Asset Infrastructure](https://hero.handmade.network/episode/code/day159/)

# [Day 160: Basic General Purpose Allocation](https://hero.handmade.network/episode/code/day160/)

# [Day 161: Finishing the General Purpose Allocator](https://hero.handmade.network/episode/code/day161/)

# [Day 162: Introduction to Fonts](https://hero.handmade.network/episode/code/day162/)

# [Day 163: Asset Processing with STB TrueType](https://hero.handmade.network/episode/code/day163/)

# [Day 164: Asset Processing with Windows Fonts](https://hero.handmade.network/episode/code/day164/)

# [Day 165: Fixing an Asset System Thread Bug](https://hero.handmade.network/episode/code/day165/)

# [Day 166: Adding Locks to the Asset Operations](https://hero.handmade.network/episode/code/day166/)

# [Day 167: Finishing Win32 Font Glyph Extraction](https://hero.handmade.network/episode/code/day167/)

# [Day 168: Rendering Lines of Text](https://hero.handmade.network/episode/code/day168/)

# [Day 169: Aligning Text to a Baseline](https://hero.handmade.network/episode/code/day169/)

# [Day 170: Defining Font Metadata](https://hero.handmade.network/episode/code/day170/)

# [Day 171: Adding Font Metadata to the Asset Builder](https://hero.handmade.network/episode/code/day171/)

# [Day 172: Extracting Kerning Tables from Windows](https://hero.handmade.network/episode/code/day172/)

# [Day 173: Precise Font Alignment](https://hero.handmade.network/episode/code/day173/)

# [Day 174: Adding Sparse Unicode Support](https://hero.handmade.network/episode/code/day174/)

# [Day 175: Finishing Sparse Unicode Support](https://hero.handmade.network/episode/code/day175/)

# [Day 176: Introduction to Debug Infrastructure](https://hero.handmade.network/episode/code/day176/)

# [Day 177: Automatic Performance Counters](https://hero.handmade.network/episode/code/day177/)

# [Day 178: Thread-safe Performance Counters](https://hero.handmade.network/episode/code/day178/)

# [Day 179: Tracking Debug Information Over Time](https://hero.handmade.network/episode/code/day179/)

# [Day 180: Adding Debug Graphs](https://hero.handmade.network/episode/code/day180/)

# [Day 181: Log-based Performance Counters](https://hero.handmade.network/episode/code/day181/)

# [Day 182: Fast Thread ID Retrieval](https://hero.handmade.network/episode/code/day182/)

# [Day 183: Platform Layer Debug Events](https://hero.handmade.network/episode/code/day183/)

# [Day 184: Collating Debug Events](https://hero.handmade.network/episode/code/day184/)

# [Day 185: Finishing Basic Debug Collation](https://hero.handmade.network/episode/code/day185/)

# [Day 186: Starting to Debug Event Recording](https://hero.handmade.network/episode/code/day186/)

# [Day 187: Fixing an Event Recording Bug](https://hero.handmade.network/episode/code/day187/)

# [Day 188: Adding Hover to the Debug Graphs](https://hero.handmade.network/episode/code/day188/)

# [Day 189: Incremental Debug Frame Processing](https://hero.handmade.network/episode/code/day189/)

# [Day 190: Cleaning Up Debug Globals](https://hero.handmade.network/episode/code/day190/)

# [Day 191: Implementing a Radial Menu](https://hero.handmade.network/episode/code/day191/)

# [Day 192: Implementing Self-Recompilation](https://hero.handmade.network/episode/code/day192/)

# [Day 193: Run-time Setting of Compile-time Variables](https://hero.handmade.network/episode/code/day193/)

# [Day 194: Organizing Debug Variables into a Hierarchy](https://hero.handmade.network/episode/code/day194/)

# [Day 195: Implementing an Interactive Tree View](https://hero.handmade.network/episode/code/day195/)

# [Day 196: Introduction to UI Interactions](https://hero.handmade.network/episode/code/day196/)

# [Day 197: Integrating Multiple Debug Views](https://hero.handmade.network/episode/code/day197/)

# [Day 198: Run-time Editing of Debug Hierarchies](https://hero.handmade.network/episode/code/day198/)

# [Day 199: Reusing Debug Interactions](https://hero.handmade.network/episode/code/day199/)

# [Day 200: Debug Element Layout](https://hero.handmade.network/episode/code/day200/)

# [Day 201: Isolating the Debug Code](https://hero.handmade.network/episode/code/day201/)

# [Day 202: Multiply Appearing Debug Values](https://hero.handmade.network/episode/code/day202/)

# [Day 203: Debug UI State Caching](https://hero.handmade.network/episode/code/day203/)

# [Day 204: Unprojecting the Mouse Cursor](https://hero.handmade.network/episode/code/day204/)

# [Day 205: Picking Entities with the Mouse](https://hero.handmade.network/episode/code/day205/)

# [Day 206: Implementing Introspection](https://hero.handmade.network/episode/code/day206/)

# [Day 207: Using Introspection Data](https://hero.handmade.network/episode/code/day207/)

# [Day 208: Adding Data Blocks to the Debug Log](https://hero.handmade.network/episode/code/day208/)

# [Day 209: Displaying Buffered Debug Data](https://hero.handmade.network/episode/code/day209/)

# [Day 210: Consolidating Debug Data Storage](https://hero.handmade.network/episode/code/day210/)

# [Day 211: Removing Records and Translation Units from the Debug Code](https://hero.handmade.network/episode/code/day211/)

# [Day 212: Integrating Debug UI into Game Code](https://hero.handmade.network/episode/code/day212/)

# [Day 213: Turning Debug Switches into Events](https://hero.handmade.network/episode/code/day213/)

# [Day 214: Collating Permanent Debug Values](https://hero.handmade.network/episode/code/day214/)

# [Day 215: Cleaning Up Debug Event Collation](https://hero.handmade.network/episode/code/day215/)

# [Day 216: On-demand Deallocation](https://hero.handmade.network/episode/code/day216/)

# [Day 217: Per-element Debug Event Storage](https://hero.handmade.network/episode/code/day217/)

# [Day 218: Hashing Debug Elements](https://hero.handmade.network/episode/code/day218/)

# [Day 219: Automatically Constructed Debug Hierarchies](https://hero.handmade.network/episode/code/day219/)

# [Day 220: Displaying Data Blocks in the Hierarchy](https://hero.handmade.network/episode/code/day220/)

# [Day 221: Implementing Multi-layer Cutscenes](https://hero.handmade.network/episode/code/day221/)

# [Day 222: Laying Out Cutscenes](https://hero.handmade.network/episode/code/day222/)

# [Day 223: Playing Multiple Cutscenes](https://hero.handmade.network/episode/code/day223/)

# [Day 224: Prefetching Cutscene Layers](https://hero.handmade.network/episode/code/day224/)

# [Day 225: Fading In and Out from the Windows Desktop](https://hero.handmade.network/episode/code/day225/)

# [Day 226: Handling Multiple Metagame Modes](https://hero.handmade.network/episode/code/day226/)

# [Day 227: Switching Between Metagame Modes](https://hero.handmade.network/episode/code/day227/)

# [Day 228: Waiting for Dependent Tasks on Metagame Mode Changes](https://hero.handmade.network/episode/code/day228/)

# [Day 229: Sorting Render Elements](https://hero.handmade.network/episode/code/day229/)

# [Day 230: Refining Renderer Sort Keys](https://hero.handmade.network/episode/code/day230/)

# [Day 231: Order Notation](https://hero.handmade.network/episode/code/day231/)

# [Day 232: Examples of Sorting Algorithms](https://hero.handmade.network/episode/code/day232/)

# [Day 233: Can We Merge Sort In Place?](https://hero.handmade.network/episode/code/day233/)

# [Day 234: Implementing Radix Sort](https://hero.handmade.network/episode/code/day234/)

# [Day 235: Initializing OpenGL on Windows](https://hero.handmade.network/episode/code/day235/)

# [Day 236: GPU Conceptual Overview](https://hero.handmade.network/episode/code/day236/)

# [Day 237: Displaying an Image with OpenGL](https://hero.handmade.network/episode/code/day237/)

# [Day 238: Making OpenGL Use Our Screen Coordinates](https://hero.handmade.network/episode/code/day238/)

# [Day 239: Rendering the Game Through OpenGL](https://hero.handmade.network/episode/code/day239/)

# [Day 240: Moving the Renderer into a Third Tier](https://hero.handmade.network/episode/code/day240/)

# [Day 241: OpenGL VSync and sRGB Extensions](https://hero.handmade.network/episode/code/day241/)

# [Day 242: OpenGL Context Escalation](https://hero.handmade.network/episode/code/day242/)

# [Day 243: Asynchronous Texture Downloads](https://hero.handmade.network/episode/code/day243/)

# [Day 244: Finishing Asynchronous Texture Downloads](https://hero.handmade.network/episode/code/day244/)

# [Day 245: Using wglChoosePixelFormatARB](https://hero.handmade.network/episode/code/day245/)

# [Day 246: Moving Worker Context Creation to the Main Thread](https://hero.handmade.network/episode/code/day246/)

# [Day 247: Simplifying Debug Values](https://hero.handmade.network/episode/code/day247/)

# [Day 248: Cleaning Up Data Block Display](https://hero.handmade.network/episode/code/day248/)

# [Day 249: Cleaning Up Debug Macros](https://hero.handmade.network/episode/code/day249/)

# [Day 250: Cleaning Up Debug GUIDs](https://hero.handmade.network/episode/code/day250/)

# [Day 251: Finishing the Debug Hierarchy](https://hero.handmade.network/episode/code/day251/)

# [Day 252: Allowing Debug Value Edits](https://hero.handmade.network/episode/code/day252/)

# [Day 253: Reenabling More Debug UI](https://hero.handmade.network/episode/code/day253/)

# [Day 254: Reenabling Profiling](https://hero.handmade.network/episode/code/day254/)

# [Day 255: Building a Profile Tree](https://hero.handmade.network/episode/code/day255/)

# [Day 256: XBox Controller Stalls and Fixing GL Blit Gamma](https://hero.handmade.network/episode/code/day256/)

# [Day 257: Cleaning Up Some Win32 Issues](https://hero.handmade.network/episode/code/day257/)

# [Day 258: Fixing Profiling Across Code Reloads](https://hero.handmade.network/episode/code/day258/)

# [Day 259: OpenGL and Software Renderer Cleanup](https://hero.handmade.network/episode/code/day259/)

# [Day 260: Implementing Drill-down in the Profiler](https://hero.handmade.network/episode/code/day260/)

# [Day 261: Changing to Static Frame Arrays](https://hero.handmade.network/episode/code/day261/)

# [Day 262: Drawing Multi-frame Profile Graphs](https://hero.handmade.network/episode/code/day262/)

# [Day 263: Adding a Debug Frame Slider](https://hero.handmade.network/episode/code/day263/)

# [Day 264: Adding Buttons to the Profiler](https://hero.handmade.network/episode/code/day264/)

# [Day 265: Cleaning Up the UI Layout Code](https://hero.handmade.network/episode/code/day265/)

# [Day 266: Adding a Top Clocks Profile View](https://hero.handmade.network/episode/code/day266/)

# [Day 267: Adding Per-Element Clipping Rectangles](https://hero.handmade.network/episode/code/day267/)

# [Day 268: Consolidating Debug Links and Groups](https://hero.handmade.network/episode/code/day268/)

# [Day 269: Cleaning Up Menu Drawing](https://hero.handmade.network/episode/code/day269/)

# [Day 270: Making Traversable Points](https://hero.handmade.network/episode/code/day270/)

# [Day 271: Hybrid Tile-based Movement](https://hero.handmade.network/episode/code/day271/)

# [Day 272: Explicit Movement Transitions](https://hero.handmade.network/episode/code/day272/)

# [Day 273: Animation Overview](https://hero.handmade.network/episode/code/day273/)

# [Day 274: Dynamic Animation with Springs](https://hero.handmade.network/episode/code/day274/)

# [Day 275: Passing Rotation and Shear to the Renderer](https://hero.handmade.network/episode/code/day275/)

# [Day 276: Tuning the Body Animation](https://hero.handmade.network/episode/code/day276/)

# [Day 277: The Sparse Entity System](https://hero.handmade.network/episode/code/day277/)

# [Day 278: Moving Entity Storage into World Chunks](https://hero.handmade.network/episode/code/day278/)

# [Day 279: Finishing World Chunk Entity Storage](https://hero.handmade.network/episode/code/day279/)

# [Day 280: Cleaned Up Streaming Entity Simulation](https://hero.handmade.network/episode/code/day280/)

# [Day 281: Animating the Camera Between Rooms](https://hero.handmade.network/episode/code/day281/)

# [Day 282: Z Movement and Camera Motion](https://hero.handmade.network/episode/code/day282/)

# [Day 283: Making Standing-on a More Rigorous Concept](https://hero.handmade.network/episode/code/day283/)

# [Day 284: Reorganizing the Head and Body Code](https://hero.handmade.network/episode/code/day284/)

# [Day 285: Transactional Occupation of Traversables](https://hero.handmade.network/episode/code/day285/)

# [Day 286: Starting to Decouple Entity Behavior](https://hero.handmade.network/episode/code/day286/)

# [Day 287: Adding Brains](https://hero.handmade.network/episode/code/day287/)

# [Day 288: Finishing Brains](https://hero.handmade.network/episode/code/day288/)

# [Day 289: Decoupling Visuals from Entity Types](https://hero.handmade.network/episode/code/day289/)

# [Day 290: Finishing Separated Rendering](https://hero.handmade.network/episode/code/day290/)

# [Day 291: Hopping Monstar and Occupying Trees](https://hero.handmade.network/episode/code/day291/)

# [Day 292: Implementing Snakes](https://hero.handmade.network/episode/code/day292/)

# [Day 293: Moving Familiars](https://hero.handmade.network/episode/code/day293/)

# [Day 294: Adding the Glove](https://hero.handmade.network/episode/code/day294/)

# [Day 295: Stacking Rooms for Z Layer Debugging](https://hero.handmade.network/episode/code/day295/)

# [Day 296: Fog and Alpha for Layers](https://hero.handmade.network/episode/code/day296/)

# [Day 297: Separating Entities into Z Layers](https://hero.handmade.network/episode/code/day297/)

# [Day 298: Improving Sort Keys Part 1](https://hero.handmade.network/episode/code/day298/)

# [Day 299: Improving Sort Keys Part 2](https://hero.handmade.network/episode/code/day299/)

# [Day 300: Changing from Sort Keys to Sort Rules](https://hero.handmade.network/episode/code/day300/)

# [Day 301: Sorting with Sprite Bounds](https://hero.handmade.network/episode/code/day301/)

# [Day 302: Confirming No Total Ordering](https://hero.handmade.network/episode/code/day302/)

# [Day 303: Trying Separate Y and Z Sorts](https://hero.handmade.network/episode/code/day303/)

# [Day 304: Building and Traversing Graphs](https://hero.handmade.network/episode/code/day304/)

# [Day 305: Using Memory Arenas in the Platform Layer](https://hero.handmade.network/episode/code/day305/)

# [Day 306: Debugging Graph-based Sort](https://hero.handmade.network/episode/code/day306/)

# [Day 307: Visualizing Sort Groups](https://hero.handmade.network/episode/code/day307/)

# [Day 308: Debugging the Cycle Check](https://hero.handmade.network/episode/code/day308/)

# [Day 309: Grid Partitioning for Overlap Testing](https://hero.handmade.network/episode/code/day309/)

# [Day 310: Finishing Sort Acceleration via Gridding](https://hero.handmade.network/episode/code/day310/)

# [Day 311: Allowing Manual Sorting](https://hero.handmade.network/episode/code/day311/)

# [Day 312: Cross-entity Manual Sorting](https://hero.handmade.network/episode/code/day312/)

# [Day 313: Returning to Work on Z Layers](https://hero.handmade.network/episode/code/day313/)

# [Day 314: Breaking Sprites into Layers](https://hero.handmade.network/episode/code/day314/)

# [Day 315: Un-reversing Sort Key Order](https://hero.handmade.network/episode/code/day315/)

# [Day 316: Multiple Software Render Targets](https://hero.handmade.network/episode/code/day316/)

# [Day 317: Alpha Blending Multiple Render Targets](https://hero.handmade.network/episode/code/day317/)

# [Day 318: Optimizing Render Target Blends and Clears](https://hero.handmade.network/episode/code/day318/)

# [Day 319: Inverse and Transpose Matrices](https://hero.handmade.network/episode/code/day319/)

# [Day 320: Inverting a 2x2 Matrix by Hand](https://hero.handmade.network/episode/code/day320/)

# [Day 321: Multiple OpenGL Render Targets](https://hero.handmade.network/episode/code/day321/)

# [Day 322: Handling Multiple Display Aspect Ratios](https://hero.handmade.network/episode/code/day322/)

# [Day 323: Fixing Miscellaneous Bugs](https://hero.handmade.network/episode/code/day323/)

# [Day 324: Moving Away from Multiple OpenGL Contexts](https://hero.handmade.network/episode/code/day324/)

# [Day 325: Ticket Mutexes](https://hero.handmade.network/episode/code/day325/)

# [Day 326: Vararg Functions](https://hero.handmade.network/episode/code/day326/)

# [Day 327: Parsing Printf Format Strings](https://hero.handmade.network/episode/code/day327/)

# [Day 328: Integer and String Support in Printf](https://hero.handmade.network/episode/code/day328/)

# [Day 329: Printing Out Floats Poorly](https://hero.handmade.network/episode/code/day329/)

# [Day 330: Fixings Bugs from the Issue List](https://hero.handmade.network/episode/code/day330/)

# [Day 331: Activating Entities by Brain](https://hero.handmade.network/episode/code/day331/)

# [Day 332: Disabling Sort for Debug Overlays](https://hero.handmade.network/episode/code/day332/)

# [Day 333: Floor-relative Perspective Transforms](https://hero.handmade.network/episode/code/day333/)

# [Day 334: Adding Boost Pads](https://hero.handmade.network/episode/code/day334/)

# [Day 335: Moving Entities on Boost Squares](https://hero.handmade.network/episode/code/day335/)

# [Day 336: Adding a Particle System Cache](https://hero.handmade.network/episode/code/day336/)

# [Day 337: Convenient SIMD for Particles](https://hero.handmade.network/episode/code/day337/)

# [Day 338: Simulation-space Particles](https://hero.handmade.network/episode/code/day338/)

# [Day 339: Debugging Particle Camera Offset Motion](https://hero.handmade.network/episode/code/day339/)

# [Day 340: Cleaning Up World / Sim-Region Interactions](https://hero.handmade.network/episode/code/day340/)

# [Day 341: Dynamically Growing Arenas](https://hero.handmade.network/episode/code/day341/)

# [Day 342: Supporting Temporary Memory in Dynamic Arenas](https://hero.handmade.network/episode/code/day342/)

# [Day 343: Saving and Restoring Dynamically Allocated Memory Pages](https://hero.handmade.network/episode/code/day343/)

# [Day 344: Selective Memory Restoration](https://hero.handmade.network/episode/code/day344/)

# [Day 345: Protecting Memory Pages for Underflow Detection](https://hero.handmade.network/episode/code/day345/)

# [Day 346: Consolidating Memory Block Headers](https://hero.handmade.network/episode/code/day346/)

# [Day 347: Debugging Win32 Memory List Corruption](https://hero.handmade.network/episode/code/day347/)

# [Day 348: Debugging Cutscene Z and Traversable Creation](https://hero.handmade.network/episode/code/day348/)

# [Day 349: Running Multiple Sim Regions](https://hero.handmade.network/episode/code/day349/)

# [Day 350: Multithreaded World Simulation](https://hero.handmade.network/episode/code/day350/)

# [Day 351: Optimizing Multithreaded Simulation Regions](https://hero.handmade.network/episode/code/day351/)

# [Day 352: Isolating the Camera Update Code](https://hero.handmade.network/episode/code/day352/)

# [Day 353: Simple RLE Compression](https://hero.handmade.network/episode/code/day353/)

# [Day 354: Simple LZ Compression](https://hero.handmade.network/episode/code/day354/)

# [Day 355: Clearing Out Pending GitHub Bugs](https://hero.handmade.network/episode/code/day355/)

# [Day 356: Making the Debug System CLANG Compatible](https://hero.handmade.network/episode/code/day356/)

# [Day 357: Room-based Camera Zoom](https://hero.handmade.network/episode/code/day357/)

# [Day 358: Introduction to Depth Buffers](https://hero.handmade.network/episode/code/day358/)

# [Day 359: OpenGL Projection Matrices Revisited](https://hero.handmade.network/episode/code/day359/)

# [Day 360: Moving the Perspective Divide to OpenGL](https://hero.handmade.network/episode/code/day360/)

# [Day 361: Introduction to 3D Rotation Matrices](https://hero.handmade.network/episode/code/day361/)

# [Day 362: Matrix Multiplication and Transform Order](https://hero.handmade.network/episode/code/day362/)

# [Day 363: Making an Orbiting Debug Camera](https://hero.handmade.network/episode/code/day363/)

# [Day 364: Enabling the OpenGL Depth Buffer](https://hero.handmade.network/episode/code/day364/)

# [Day 365: Adjusting Sprite Cards to Counter Projection](https://hero.handmade.network/episode/code/day365/)

# [Day 366: Adding Cubes to the Renderer](https://hero.handmade.network/episode/code/day366/)

# [Day 367: Enabling OpenGL Multisampling](https://hero.handmade.network/episode/code/day367/)

# [Day 368: Compiling and Linking Shaders in OpenGL](https://hero.handmade.network/episode/code/day368/)

# [Day 369: Introduction to Vertex and Fragment Shaders](https://hero.handmade.network/episode/code/day369/)

# [Day 370: Shader Fallback sRGB](https://hero.handmade.network/episode/code/day370/)

# [Day 371: OpenGL Vertex Arrays](https://hero.handmade.network/episode/code/day371/)

# [Day 372: Using Strictly OpenGL Core Profile](https://hero.handmade.network/episode/code/day372/)

# [Day 373: Inverting the Full 3D Transform](https://hero.handmade.network/episode/code/day373/)

# [Day 374: Debugging Z Transform and Bias](https://hero.handmade.network/episode/code/day374/)

# [Day 375: Adding Distance-based Fog](https://hero.handmade.network/episode/code/day375/)

# [Day 376: Drawing Debug Volumes](https://hero.handmade.network/episode/code/day376/)

# [Day 377: Improving Collision Volumes and the Camera](https://hero.handmade.network/episode/code/day377/)

# [Day 378: Adding More Camera Behaviors](https://hero.handmade.network/episode/code/day378/)

# [Day 379: Debug Overlay Cleanup and Render Group Performance Investigation](https://hero.handmade.network/episode/code/day379/)

# [Day 380: Attempting (and Failing) to Fix the Clock](https://hero.handmade.network/episode/code/day380/)

# [Day 381: Two-pass Depth Peeling](https://hero.handmade.network/episode/code/day381/)

# [Day 382: Depth Peel Compositing](https://hero.handmade.network/episode/code/day382/)

# [Day 383: Fixing Depth Peel Artifacts](https://hero.handmade.network/episode/code/day383/)

# [Day 384: Dynamically Responding to Render Settings](https://hero.handmade.network/episode/code/day384/)

# [Day 385: Trying Multisampled Depth Peels](https://hero.handmade.network/episode/code/day385/)

# [Day 386: Implementing a Custom Multisample Resolve](https://hero.handmade.network/episode/code/day386/)

# [Day 387: Further Attempts at Multisampled Depth Peeling](https://hero.handmade.network/episode/code/day387/)

# [Day 388: Successful Multisampled Depth-Peeling](https://hero.handmade.network/episode/code/day388/)

# [Day 389: Adding Simple Lighting](https://hero.handmade.network/episode/code/day389/)

# [Day 390: Adding Simple Phong Lighting](https://hero.handmade.network/episode/code/day390/)

# [Day 391: Planning Better Lighting](https://hero.handmade.network/episode/code/day391/)

# [Day 392: Creating Lighting Textures](https://hero.handmade.network/episode/code/day392/)

# [Day 393: Planning Lighting from Depth Peels](https://hero.handmade.network/episode/code/day393/)

# [Day 394: Basic Multigrid Lighting Upward Iteration](https://hero.handmade.network/episode/code/day394/)

# [Day 395: Basic Multigrid Lighting Down Iteration](https://hero.handmade.network/episode/code/day395/)

# [Day 396: Rendering Lighting Information from the Game](https://hero.handmade.network/episode/code/day396/)

# [Day 397: Converting Depth Peel Data to Lighting Data](https://hero.handmade.network/episode/code/day397/)

# [Day 398: Applying Lighting Back to Depth Peels](https://hero.handmade.network/episode/code/day398/)

# [Day 399: Creating a CPU-side Lighting Testbed](https://hero.handmade.network/episode/code/day399/)

# [Day 400: Adding an Ambient Occlusion Pass](https://hero.handmade.network/episode/code/day400/)

# [Day 401: Debugging Lighting Transfer](https://hero.handmade.network/episode/code/day401/)

# [Day 402: Adding Raycasting to the Lighting](https://hero.handmade.network/episode/code/day402/)

# [Day 403: Off-line Lighting and Per-vertex Reflectors](https://hero.handmade.network/episode/code/day403/)

# [Day 404: Voxel-Indexed Lighting Samples](https://hero.handmade.network/episode/code/day404/)

# [Day 405: Crashing the Stream with a Fragment Shader](https://hero.handmade.network/episode/code/day405/)

# [Day 406: Getting a Graphics Debugger Working](https://hero.handmade.network/episode/code/day406/)

# [Day 407: Starting to Debug Volume Textures](https://hero.handmade.network/episode/code/day407/)

# [Day 408: Finishing Debugging Volume Textures](https://hero.handmade.network/episode/code/day408/)

# [Day 409: Smoother Blending of Lighting Samples](https://hero.handmade.network/episode/code/day409/)

# [Day 410: Tracking Incident Light](https://hero.handmade.network/episode/code/day410/)

# [Day 411: Switching to Rectangular Lighting Elements](https://hero.handmade.network/episode/code/day411/)

# [Day 412: Debugging Voxel Interpolation](https://hero.handmade.network/episode/code/day412/)

# [Day 413: Encoding Light Values](https://hero.handmade.network/episode/code/day413/)

# [Day 414: Improving Light Distribution](https://hero.handmade.network/episode/code/day414/)

# [Day 415: Per-primitive Lighting Samples](https://hero.handmade.network/episode/code/day415/)

# [Day 416: Separating Lighting and Geometry Submission](https://hero.handmade.network/episode/code/day416/)

# [Day 417: Adding a Debug View for Lighting Points](https://hero.handmade.network/episode/code/day417/)

# [Day 418: Smoothing Light Samples Over Time](https://hero.handmade.network/episode/code/day418/)

# [Day 419: Debugging Missing Lighting](https://hero.handmade.network/episode/code/day419/)

# [Day 420: Pushing Lighting Information Directly](https://hero.handmade.network/episode/code/day420/)

# [Day 421: Passing Lighting as Boxes](https://hero.handmade.network/episode/code/day421/)

# [Day 422: Raycasting AABBs Directly](https://hero.handmade.network/episode/code/day422/)

# [Day 423: Modifying Lighting to Use a Spatial Hierarchy](https://hero.handmade.network/episode/code/day423/)

# [Day 424: Modifying Lighting to Use a Spatial Hierarchy](https://hero.handmade.network/episode/code/day424/)

# [Day 425: Entity-based Lighting Storage](https://hero.handmade.network/episode/code/day425/)

# [Day 426: Debugging Lighting Persistence](https://hero.handmade.network/episode/code/day426/)

# [Day 427: Debugging Lighting Flicker](https://hero.handmade.network/episode/code/day427/)

# [Day 428: Tracking Light Proportional to Photons per Second](https://hero.handmade.network/episode/code/day428/)

# [Day 429: Multiresolution Light Sampling](https://hero.handmade.network/episode/code/day429/)

# [Day 430: Stratifying and Multithreading the Lighting](https://hero.handmade.network/episode/code/day430/)

# [Day 431: SIMD Raycasting](https://hero.handmade.network/episode/code/day431/)

# [Day 432: Finishing the Main SIMD Raycasting Loop](https://hero.handmade.network/episode/code/day432/)

# [Day 433: Optimizing Ray vs. AABB Intersections](https://hero.handmade.network/episode/code/day433/)

# [Day 434: Replacing the Pseudo-random Number Generator](https://hero.handmade.network/episode/code/day434/)

# [Day 435: Removing the CRT from the Win32 Loader](https://hero.handmade.network/episode/code/day435/)

# [Day 436: Spiral and Blue Noise Distributions on the Sphere](https://hero.handmade.network/episode/code/day436/)

# [Day 437: Switching to Precomputed Hemisphere Distributions](https://hero.handmade.network/episode/code/day437/)

# [Day 438: Switching to Cosine-weighted Poisson Sampling](https://hero.handmade.network/episode/code/day438/)

# [Day 439: Testing Better Entropy](https://hero.handmade.network/episode/code/day439/)

# [Day 440: Introduction to Function Approximation with Andrew Bromage](https://hero.handmade.network/episode/code/day440/)

# [Day 441: Never, Ever Update Your Development Tools. Ever.](https://hero.handmade.network/episode/code/day441/)

# [Day 442: Getting NSight Working](https://hero.handmade.network/episode/code/day442/)

# [Day 443: Updating the Player Movement Code](https://hero.handmade.network/episode/code/day443/)

# [Day 444: Stubbing Out the World Generator](https://hero.handmade.network/episode/code/day444/)

# [Day 445: Cleaning Up Entity Creation](https://hero.handmade.network/episode/code/day445/)

# [Day 446: Generating Possible Room Volumes](https://hero.handmade.network/episode/code/day446/)

# [Day 447: Placing Adjacent Rooms](https://hero.handmade.network/episode/code/day447/)

# [Day 448: Explicitly Placed Room Connections](https://hero.handmade.network/episode/code/day448/)

# [Day 449: Preventing Overlapping Rooms](https://hero.handmade.network/episode/code/day449/)

# [Day 450: Supporting All Room Connection Directions](https://hero.handmade.network/episode/code/day450/)

# [Day 451: Updating Unproject](https://hero.handmade.network/episode/code/day451/)

# [Day 452: Improving Camera Placement and Room Alignment](https://hero.handmade.network/episode/code/day452/)

# [Day 453: Parsing PNG Headers](https://hero.handmade.network/episode/code/day453/)

# [Day 454: Parsing ZLIB Headers](https://hero.handmade.network/episode/code/day454/)

# [Day 455: Decoding PNG Huffman Tables](https://hero.handmade.network/episode/code/day455/)

# [Day 456: Decoding PNG Length and Distance Extra Bits](https://hero.handmade.network/episode/code/day456/)

# [Day 457: Implementing PNG Reconstruction Filters](https://hero.handmade.network/episode/code/day457/)

# [Day 458: Debugging the PNG Reader](https://hero.handmade.network/episode/code/day458/)

# [Day 459: Partitioning the PNG Reader for Integration](https://hero.handmade.network/episode/code/day459/)

# [Day 460: Providing Platform File Information to the Game](https://hero.handmade.network/episode/code/day460/)

# [Day 461: Checking for File Date Changes](https://hero.handmade.network/episode/code/day461/)

# [Day 462: Extracting Asset Tiles from Gridded PNGs](https://hero.handmade.network/episode/code/day462/)

# [Day 463: Preparing HHAs for Rewriting](https://hero.handmade.network/episode/code/day463/)

# [Day 464: Applying Asset Types and Tags to Imported PNGs](https://hero.handmade.network/episode/code/day464/)

# [Day 465: Updating HHAs from V0 to V1](https://hero.handmade.network/episode/code/day465/)

# [Day 466: Loading and Displaying HHA Files as Text](https://hero.handmade.network/episode/code/day466/)

# [Day 467: Updating the Game to HHA Version 1](https://hero.handmade.network/episode/code/day467/)

# [Day 468: Handling Annotation Data During Import](https://hero.handmade.network/episode/code/day468/)

# [Day 469: Downsampling Imported Assets](https://hero.handmade.network/episode/code/day469/)

# [Day 470: Separating the Renderer Completely (Part 1)](https://hero.handmade.network/episode/code/day470/)

# [Day 471: Separating the Renderer Completely (Part 2)](https://hero.handmade.network/episode/code/day471/)

# [Day 472: Making a Simple Scene with the Separated Renderer](https://hero.handmade.network/episode/code/day472/)

# [Day 473: Removing Screen Coordinates from the Render Group](https://hero.handmade.network/episode/code/day473/)

# [Day 474: Removing the Transient State Concept](https://hero.handmade.network/episode/code/day474/)

# [Day 475: Abstracting the Renderer Interface](https://hero.handmade.network/episode/code/day475/)

# [Day 476: Providing Convenient Camera Controls](https://hero.handmade.network/episode/code/day476/)

# [Day 477: Changing to Single Dispatch Per Pass (Part 1)](https://hero.handmade.network/episode/code/day477/)

# [Day 478: Changing to Single Dispatch Per Pass (Part 2)](https://hero.handmade.network/episode/code/day478/)

# [Day 479: Large Texture Support](https://hero.handmade.network/episode/code/day479/)

# [Day 480: Debugging Large Texture Support](https://hero.handmade.network/episode/code/day480/)

# [Day 481: Encoding Cube UVs](https://hero.handmade.network/episode/code/day481/)

# [Day 482: Associating Tags with PNGs](https://hero.handmade.network/episode/code/day482/)

# [Day 483: Debugging Tagged PNG Imports](https://hero.handmade.network/episode/code/day483/)

# [Day 484: Debugging Multi-tile Import](https://hero.handmade.network/episode/code/day484/)

# [Day 485: Adding Entity Placement to the World Generator](https://hero.handmade.network/episode/code/day485/)

# [Day 486: Adding Multiple Alignment Points](https://hero.handmade.network/episode/code/day486/)

# [Day 487: Hit-Testing Boxes in 3D](https://hero.handmade.network/episode/code/day487/)

# [Day 488: Adding an In-Game Editor](https://hero.handmade.network/episode/code/day488/)

# [Day 489: Implementing Undo and Redo](https://hero.handmade.network/episode/code/day489/)

# [Day 490: Merging Debug and Developer UI](https://hero.handmade.network/episode/code/day490/)

# [Day 491: Debugging the Basic Editor UI](https://hero.handmade.network/episode/code/day491/)

# [Day 492: Adding More Editor Interactions](https://hero.handmade.network/episode/code/day492/)

# [Day 493: Cleaning Up the Editor UI Layout](https://hero.handmade.network/episode/code/day493/)

# [Day 494: Preparing Entity Pieces for Alignment Points](https://hero.handmade.network/episode/code/day494/)

# [Day 495: Improving the Alignment Editing UI](https://hero.handmade.network/episode/code/day495/)

# [Day 496: Debugging Attachment Point Transforms](https://hero.handmade.network/episode/code/day496/)

# [Day 497: Starting on Asset System Cleanup](https://hero.handmade.network/episode/code/day497/)

# [Day 498: Finishing Asset System Cleanup](https://hero.handmade.network/episode/code/day498/)

# [Day 499: Unifying Debug and Editor Modes](https://hero.handmade.network/episode/code/day499/)

# [Day 500: Saving HHAs Modified by the In-Game Editor](https://hero.handmade.network/episode/code/day500/)

# [Day 501: Importing Orphans](https://hero.handmade.network/episode/code/day501/)

# [Day 502: Adding Stairs to the Generator](https://hero.handmade.network/episode/code/day502/)

# [Day 503: Constructing a Camera Easing Function](https://hero.handmade.network/episode/code/day503/)

# [Day 504: Exploring Camera Interpolation Alternatives](https://hero.handmade.network/episode/code/day504/)

# [Day 505: Placing Multiple Entities at a Time](https://hero.handmade.network/episode/code/day505/)

# [Day 506: Improving Camera Motion](https://hero.handmade.network/episode/code/day506/)

# [Day 507: LRU Texture Handle Reuse](https://hero.handmade.network/episode/code/day507/)

# [Day 508: Fixing the Remaining GitHub Issues](https://hero.handmade.network/episode/code/day508/)

# [Day 509: Creating Tags Files](https://hero.handmade.network/episode/code/day509/)

# [Day 510: Making a Parser for HHTs](https://hero.handmade.network/episode/code/day510/)

# [Day 511: Merging HHT Parsing into the Asset System](https://hero.handmade.network/episode/code/day511/)

# [Day 512: Updating Assets via HHT Files](https://hero.handmade.network/episode/code/day512/)

# [Day 513: Adding Raw Tokens and Alignment Point Parsing](https://hero.handmade.network/episode/code/day513/)

# [Day 514: Separating Image and Metadata Imports](https://hero.handmade.network/episode/code/day514/)

# [Day 515: Debugging HHT to HHA Packing](https://hero.handmade.network/episode/code/day515/)

# [Day 516: Rewriting HHTs](https://hero.handmade.network/episode/code/day516/)

# [Day 517: Inserting and Rewriting HHT Alignment Points](https://hero.handmade.network/episode/code/day517/)

# [Day 518: Displaying Import Errors](https://hero.handmade.network/episode/code/day518/)

# [Day 519: Brainstorming about Z Bias](https://hero.handmade.network/episode/code/day519/)

# [Day 520: Solving for Debug Camera Parameters](https://hero.handmade.network/episode/code/day520/)

# [Day 521: Debugging Missing Parent Pointers](https://hero.handmade.network/episode/code/day521/)

# [Day 522: Solving for Sorting Displacement](https://hero.handmade.network/episode/code/day522/)

# [Day 523: Introduction to Git](https://hero.handmade.network/episode/code/day523/)

# [Day 524: Integrating WAV Importing](https://hero.handmade.network/episode/code/day524/)

# [Day 525: Cleaning Up Import Tag Grids](https://hero.handmade.network/episode/code/day525/)

# [Day 526: Single-Buffer Sound Streaming](https://hero.handmade.network/episode/code/day526/)

# [Day 527: Making a Stand-Alone Font Extractor](https://hero.handmade.network/episode/code/day527/)

# [Day 528: Writing HHTs from HHFont](https://hero.handmade.network/episode/code/day528/)

# [Day 529: Debugging the PNG Writer](https://hero.handmade.network/episode/code/day529/)

# [Day 530: Writing Large PNGs and Supersampling Fonts](https://hero.handmade.network/episode/code/day530/)

# [Day 531: Parsing and Updating Font Metadata](https://hero.handmade.network/episode/code/day531/)

# [Day 532: Finishing HHT-Based Font Importing](https://hero.handmade.network/episode/code/day532/)

# [Day 533: Importing Particles, Scenery, and Items](https://hero.handmade.network/episode/code/day533/)

# [Day 534: Heuristic Alpha Testing for Multi-Tile Import](https://hero.handmade.network/episode/code/day534/)

# [Day 535: Minor Art Update, Reenabling Particles, Glove Fixes](https://hero.handmade.network/episode/code/day535/)

# [Day 536: Proper Variant Distributions and Issue Cleanup](https://hero.handmade.network/episode/code/day536/)

# [Day 537: Filling Areas Around Rooms](https://hero.handmade.network/episode/code/day537/)

# [Day 538: Making a Grid-based Layout Helper](https://hero.handmade.network/episode/code/day538/)

# [Day 539: Capturing Source Information for Memory Allocations](https://hero.handmade.network/episode/code/day539/)

# [Day 540: Adding Memory Usage Visualization](https://hero.handmade.network/episode/code/day540/)

# [Day 541: Adding Call Sites to the Arena Display](https://hero.handmade.network/episode/code/day541/)

# [Day 542: Drawing Memory Occupancy Accurately](https://hero.handmade.network/episode/code/day542/)

# [Day 543: Moving Unpacked Entities from the Sim Region to World](https://hero.handmade.network/episode/code/day543/)

# [Day 544: Caching Unpacked Entities Across Frames](https://hero.handmade.network/episode/code/day544/)

# [Day 545: Adding Ground Cover](https://hero.handmade.network/episode/code/day545/)

# [Day 546: GPU MIP Mapping](https://hero.handmade.network/episode/code/day546/)

# [Day 547: Starting the Move to Light Probes](https://hero.handmade.network/episode/code/day547/)

# [Day 548: Voxelizing Light Probes](https://hero.handmade.network/episode/code/day548/)

# [Day 549: Removing Old Lighting Lookups](https://hero.handmade.network/episode/code/day549/)

# [Day 550: SIMD Raycast Point and Normal Computations](https://hero.handmade.network/episode/code/day550/)

# [Day 551: Computing Probe to Probe Transmission](https://hero.handmade.network/episode/code/day551/)

# [Day 552: Generating Sampling Spheres into an INL](https://hero.handmade.network/episode/code/day552/)

# [Day 553: Improved Sphere Distributions](https://hero.handmade.network/episode/code/day553/)

# [Day 554: Reducing GPU Memory Footprint](https://hero.handmade.network/episode/code/day554/)

# [Day 555: Looking for GPU Performance Issues](https://hero.handmade.network/episode/code/day555/)

# [Day 556: Optimizing Depth Peeling and Multisample Resolves](https://hero.handmade.network/episode/code/day556/)

# [Day 557: Basic Dynamic Quad Output Optimizations](https://hero.handmade.network/episode/code/day557/)

# [Day 558: Assigning Lighting Probe Slots](https://hero.handmade.network/episode/code/day558/)

# [Day 559: Experimenting with Fragment Light Sampling](https://hero.handmade.network/episode/code/day559/)

# [Day 560: Querying Irradiance Directly from Voxels](https://hero.handmade.network/episode/code/day560/)

# [Day 561: Sampling Light Voxels with a Reflection Vector](https://hero.handmade.network/episode/code/day561/)

# [Day 562: Testing Voxel Light Sampling](https://hero.handmade.network/episode/code/day562/)

# [Day 563: Using the Light Probe Spatial Index](https://hero.handmade.network/episode/code/day563/)

# [Day 564: Improving Trilinear Sampling Results](https://hero.handmade.network/episode/code/day564/)

# [Day 565: Reconstructing Multiple Lights](https://hero.handmade.network/episode/code/day565/)

# [Day 566: Moving to a Voxels-only Lighting Approach](https://hero.handmade.network/episode/code/day566/)

# [Day 567: Large to Small Voxel Transfer](https://hero.handmade.network/episode/code/day567/)

# [Day 568: Debugging the Raycaster](https://hero.handmade.network/episode/code/day568/)

# [Day 569: Raycasting from Light Probe Locations](https://hero.handmade.network/episode/code/day569/)

# [Day 570: Distinguishing Between Lights and Occluders](https://hero.handmade.network/episode/code/day570/)

# [Day 571: Adding a Light Hierarchy](https://hero.handmade.network/episode/code/day571/)

# [Day 572: Scrolling the Lighting Voxel](https://hero.handmade.network/episode/code/day572/)

# [Day 573: Wiring Up Light Transport](https://hero.handmade.network/episode/code/day573/)

# [Day 574: Experimenting with Voxel Filters](https://hero.handmade.network/episode/code/day574/)

# [Day 575: Generalizing Code Reloading](https://hero.handmade.network/episode/code/day575/)

# [Day 576: Octahedral Encoding](https://hero.handmade.network/episode/code/day576/)

# [Day 577: Adding Octahedral Light Atlases](https://hero.handmade.network/episode/code/day577/)

# [Day 578: Sampling Octahedral Atlases](https://hero.handmade.network/episode/code/day578/)

# [Day 579: Debugging Octahedral Shading](https://hero.handmade.network/episode/code/day579/)

# [Day 580: Investigating Octahedral Interpolation](https://hero.handmade.network/episode/code/day580/)

# [Day 581: Preparing for Octahedral Indirect Lighting](https://hero.handmade.network/episode/code/day581/)

# [Day 582: Converting Specular Maps to Diffuse](https://hero.handmade.network/episode/code/day582/)

# [Day 583: Streamlining the New Lighting Pipeline](https://hero.handmade.network/episode/code/day583/)

# [Day 584: Enabling Infinite-Bounce Lighting](https://hero.handmade.network/episode/code/day584/)

# [Day 585: Centralized Light Atlas Handling](https://hero.handmade.network/episode/code/day585/)

# [Day 586: Finishing Indirect Diffuse Sampling](https://hero.handmade.network/episode/code/day586/)

# [Day 587: Optimizing the Specular to Diffuse Transform](https://hero.handmade.network/episode/code/day587/)

# [Day 588: Aligning Light Voxels with the Camera](https://hero.handmade.network/episode/code/day588/)

# [Day 589: Aligning Sampling Spheres with the Octahedral Map](https://hero.handmade.network/episode/code/day589/)

# [Day 590: Starting Raycast Optimizations](https://hero.handmade.network/episode/code/day590/)

# [Day 591: Making a Stand-alone Lighting Performance Test](https://hero.handmade.network/episode/code/day591/)

# [Day 592: Capturing the Entire Lighting Data](https://hero.handmade.network/episode/code/day592/)

# [Day 593: Debugging Lighting Validation](https://hero.handmade.network/episode/code/day593/)

# [Day 594: Switching from Center-Radius to Min-Max](https://hero.handmade.network/episode/code/day594/)

# [Day 595: Sketching Out A K-d Tree Loop](https://hero.handmade.network/episode/code/day595/)

# [Day 596: Fleshing Out Kd-Tree Traversal](https://hero.handmade.network/episode/code/day596/)

# [Day 597: Basic Kd-tree Construction](https://hero.handmade.network/episode/code/day597/)

# [Day 598: Exploring Voxel Partitions for Raycasting](https://hero.handmade.network/episode/code/day598/)

# [Day 599: Implementing the Grid Raycast Postamble](https://hero.handmade.network/episode/code/day599/)

# [Day 600: Better AABB Normal Derivation](https://hero.handmade.network/episode/code/day600/)

# [Day 601: Sketching Out the Walk Table Generator](https://hero.handmade.network/episode/code/day601/)

# [Day 602: Early Termination for the Grid Raytracer](https://hero.handmade.network/episode/code/day602/)

# [Day 603: Grid Raycaster Table Generation](https://hero.handmade.network/episode/code/day603/)

# [Day 604: Adding a Voxel Utility Struct](https://hero.handmade.network/episode/code/day604/)

# [Day 605: Cleaning Up the Lighting Code](https://hero.handmade.network/episode/code/day605/)

# [Day 606: Debugging Grid Raycasting with Visualizations](https://hero.handmade.network/episode/code/day606/)

# [Day 607: Finishing Debugging the Grid Raycaster](https://hero.handmade.network/episode/code/day607/)

# [Day 608: Visualizing Lighting Values](https://hero.handmade.network/episode/code/day608/)

# [Day 609: Reducing Light Contributions from Inaccessible Voxels](https://hero.handmade.network/episode/code/day609/)

# [Day 610: Removing Incorrect Voxel-Voxel Reflections](https://hero.handmade.network/episode/code/day610/)

# [Day 611: Examining the CPU Voxel Sampling](https://hero.handmade.network/episode/code/day611/)

# [Day 612: First Pass Optimization of Voxel Sampling](https://hero.handmade.network/episode/code/day612/)

# [Day 613: Merging the Raycaster with the Sampler](https://hero.handmade.network/episode/code/day613/)

# [Day 614: Continuing Streamlining the Raycaster](https://hero.handmade.network/episode/code/day614/)

# [Day 615: Optimized Grid Step Selection](https://hero.handmade.network/episode/code/day615/)

# [Day 616: Tableless Grid Walk](https://hero.handmade.network/episode/code/day616/)

# [Day 617: Half-resolution Spatial Grid](https://hero.handmade.network/episode/code/day617/)

# [Day 618: Analyzing the Diffuse Blur](https://hero.handmade.network/episode/code/day618/)

# [Day 619: Adding Asset Tag Hashes](https://hero.handmade.network/episode/code/day619/)

# [Day 620: Asset Tag Usage Code](https://hero.handmade.network/episode/code/day620/)

# [Day 621: Asset Tags in the World Generator](https://hero.handmade.network/episode/code/day621/)

# [Day 622: Debugging Asset Tag Hashes](https://hero.handmade.network/episode/code/day622/)

# [Day 623: Investigating a Lighting Bug](https://hero.handmade.network/episode/code/day623/)

# [Day 624: Turns Out It Really WAS a Feature](https://hero.handmade.network/episode/code/day624/)

# [Day 625: Fixing the "Lighting" Bug](https://hero.handmade.network/episode/code/day625/)

# [Day 626: Cleaning Up Traversables](https://hero.handmade.network/episode/code/day626/)

# [Day 627: Opening Doors with Tiles](https://hero.handmade.network/episode/code/day627/)

# [Day 628: Brains and Aprons](https://hero.handmade.network/episode/code/day628/)

# [Day 629: Removing Entity Generators](https://hero.handmade.network/episode/code/day629/)

# [Day 630: Adding Interesting Tile Patterns](https://hero.handmade.network/episode/code/day630/)

# [Day 631: Revisiting Collision](https://hero.handmade.network/episode/code/day631/)

# [Day 632: Experimenting with Voxelized Collision](https://hero.handmade.network/episode/code/day632/)

# [Day 633: Narrowing in on a Collision Scheme](https://hero.handmade.network/episode/code/day633/)

# [Day 634: Final Collision Resolution Design](https://hero.handmade.network/episode/code/day634/)

# [Day 635: Debugging Voxel Motion Stepping](https://hero.handmade.network/episode/code/day635/)

# [Day 636: Unembedding Colliding Objects](https://hero.handmade.network/episode/code/day636/)

# [Day 637: Adding Collision Spheres](https://hero.handmade.network/episode/code/day637/)

# [Day 638: Recording Diagram Commands](https://hero.handmade.network/episode/code/day638/)

# [Day 639: Drawing Debug Diagrams](https://hero.handmade.network/episode/code/day639/)

# [Day 641: Voxel Flood Fill for Collision Search](https://hero.handmade.network/episode/code/day641/)

# [Day 642: Debugging Voxel Collision Bounds](https://hero.handmade.network/episode/code/day642/)

# [Day 644: Stepping Through Diagrams](https://hero.handmade.network/episode/code/day644/)

# [Day 645: Switching to Voxel Centers for Collision](https://hero.handmade.network/episode/code/day645/)

# [Day 646: Removing Z from Lighting](https://hero.handmade.network/episode/code/day646/)

# [Day 647: Debugging Simplified Lighting](https://hero.handmade.network/episode/code/day647/)

# [Day 648: Rebuilding Light Tables](https://hero.handmade.network/episode/code/day648/)

# [Day 649: Removing Lighting Walk Tables](https://hero.handmade.network/episode/code/day649/)

# [Day 650: Debugging Light Sampling Locations](https://hero.handmade.network/episode/code/day650/)

# [Day 651: Fixing Light Feedback](https://hero.handmade.network/episode/code/day651/)

# [Day 652: Stochastic Ray Origins](https://hero.handmade.network/episode/code/day652/)

# [Day 653: Adding a Filmic Response Curve](https://hero.handmade.network/episode/code/day653/)

# [Day 654: Self-illuminating Floor Tiles](https://hero.handmade.network/episode/code/day654/)

# [Day 656: Sketching Out Move Queues](https://hero.handmade.network/episode/code/day656/)

# [Day 657: Implementing Move Queues](https://hero.handmade.network/episode/code/day657/)

# [Day 659: Immediate-mode Level Generation](https://hero.handmade.network/episode/code/day659/)

# [Day 660: Randomized Overworld Layout](https://hero.handmade.network/episode/code/day660/)

# [Day 661: Connecting the Overworld Map](https://hero.handmade.network/episode/code/day661/)

# [Day 662: Generating Entities from Layouts](https://hero.handmade.network/episode/code/day662/)

# [Day 663: Simplifying Entity Storage, Part I](https://hero.handmade.network/episode/code/day663/)

# [Day 664: Simplifying Entity Storage Part II](https://hero.handmade.network/episode/code/day664/)

# [Day 665: Changing How Entities are Packed and Unpacked](https://hero.handmade.network/episode/code/day665/)

# [Day 666: Entity Packing and Unpacking](https://hero.handmade.network/episode/code/day666/)

# [Day 667: Simplified Tile Occupancy Checking](https://hero.handmade.network/episode/code/day667/)
