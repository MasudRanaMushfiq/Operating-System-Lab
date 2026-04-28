# Operating System Lab

A structured collection of C and C++ programs covering core Operating System concepts, organized into current lab experiments and previous year resources, spanning process management, CPU scheduling, memory management, deadlock handling, IPC mechanisms, threading, and file management.

---

## 📋 Table of Contents

- [Overview](#overview)
- [Project Structure](#project-structure)
- [Files Overview](#files-overview)
- [Prerequisites](#prerequisites)
- [Installation & Local Run](#installation--local-run)
- [Topics Covered](#topics-covered)
- [References](#references)
- [Author](#author)

---

## Overview

This repository contains lab practice work for the Operating System course at Rajshahi University Level. It is divided into two major sections:

- **Current Lab Experiments** — hands-on implementations of core OS topics organized by concept (CPU Scheduling, Deadlock, Page Replacement, Process Management, File Management)
- **Previous Year Resources** — a broader collection of older lab solutions covering IPC, Shared Memory, Threading, Memory Allocation, Paging, and Queue Scheduling

All implementations are written in C/C++ and directly demonstrate OS-level concepts without external libraries, allowing clear observation of algorithm behavior and system call usage.

---

## Project Structure

```
Operating-System-Lab/
│
├── OS Lab experiments List 2026 .pdf
├── Operating System Lab (Old) .pdf
│
├── CPU Schedulling/
│   ├── FCFS.cpp
│   ├── SJF.cpp
│   ├── SRTF.cpp
│   ├── Round_Robin.cpp
│   └── Priority_Schedulling.cpp
│
├── Deadlock/
│   ├── Bankers_Algorithm.cpp
│   └── Deadlock_Detection.cpp
│
├── Page Replacement/
│   ├── FIFO_Page_Replacement.cpp
│   └── LRU.cpp
│
├── Process Management/
│   ├── Create_Child_Process.cpp
│   ├── Create_Two_Child_Process.cpp
│   └── Print_Parent_Child_Process.cpp
│
├── File Management/
│   └── File_Operation.cpp
│
└── Previous Year Resources/
    │
    ├── Scheduling Algorithm/
    │   ├── FCFS.cpp
    │   ├── SJF.cpp
    │   ├── SRTF.cpp
    │   ├── LJF.cpp
    │   ├── LRTF.cpp
    │   ├── Round_Robin.cpp
    │   └── Priority _Scheduling.cpp
    │
    ├── Queue Scheduling/
    │   ├── MultilevelQueue.cpp
    │   └── MultilevelFeedbackQueue.cpp
    │
    ├── Paging/
    │   ├── Paging_Tecchnique.cpp
    │   ├── FIFO_Page_Replacement.cpp
    │   ├── LRU.cpp
    │   └── LFU.cpp
    │
    ├── Memory Alocation/
    │   ├── Fixed_Partition_First_Fit.cpp
    │   ├── Fixed_Partition_Best_Fit.cpp
    │   └── Fixed_Partition_Worst_Fit.cpp
    │
    ├── DeadLockDetect/
    │   ├── Bankers-Algorithm.cpp
    │   ├── Resource-Allocation-Graph.cpp
    │   └── Wait-For-Graph.cpp
    │
    ├── IPC_NamedPipe/
    │   ├── IPC_Unnamed_Pipe.cpp
    │   ├── Writter.c
    │   ├── Reader.c
    │   └── README.md
    │
    ├── Shared_Memory/
    │   ├── SharedMemory.c
    │   ├── SharedMemoryCleanCode.c
    │   └── README.md
    │
    ├── Thread/
    │   ├── Thread.c
    │   ├── Multithreading.cpp
    │   └── ThreadRaceMutex.cpp
    │
    └── File Managment/
        ├── File-Operation.c
        ├── Single_Level_Directory.cpp
        └── Two_Level_Directory.cpp
```

---

## Files Overview

### ⚙️ CPU Scheduling

Implementations of classic CPU scheduling algorithms, computing turnaround time, waiting time, and average performance metrics.

| File | Algorithm | Type |
|------|-----------|------|
| `FCFS.cpp` | First Come First Serve | Non-preemptive |
| `SJF.cpp` | Shortest Job First | Non-preemptive |
| `SRTF.cpp` | Shortest Remaining Time First | Preemptive |
| `Round_Robin.cpp` | Round Robin | Preemptive (Time Quantum) |
| `Priority_Schedulling.cpp` | Priority Scheduling | Non-preemptive |

---

### 🔒 Deadlock

Algorithms to prevent and detect deadlock in multi-resource, multi-process environments.

| File | Topic | Key Concepts |
|------|-------|--------------|
| `Bankers_Algorithm.cpp` | Deadlock Avoidance | Safety algorithm, need matrix, resource allocation |
| `Deadlock_Detection.cpp` | Deadlock Detection | Resource allocation graph, cycle detection |

---

### 📄 Page Replacement

Simulations of page replacement policies to minimize page fault rates.

| File | Algorithm | Strategy |
|------|-----------|----------|
| `FIFO_Page_Replacement.cpp` | First In First Out | Replace the oldest loaded page |
| `LRU.cpp` | Least Recently Used | Replace the least recently accessed page |

---

### 🔄 Process Management

Demonstrations of process creation and parent-child relationships using `fork()`.

| File | Topic | Key Concepts |
|------|-------|--------------|
| `Create_Child_Process.cpp` | Single child process | `fork()`, PID, parent-child relationship |
| `Create_Two_Child_Process.cpp` | Two child processes | Multiple `fork()` calls, process tree |
| `Print_Parent_Child_Process.cpp` | PID display | `getpid()`, `getppid()`, process identification |

---

### 🗂️ File Management

| File | Topic | Key Concepts |
|------|-------|--------------|
| `File_Operation.cpp` | File I/O operations | Create, read, write, delete using system calls |

---

### 📦 Previous Year Resources

A comprehensive collection of older lab solutions covering a wider range of OS topics.

---

#### Scheduling Algorithm

Extended set of scheduling algorithms including less commonly taught ones.

| File | Algorithm | Type |
|------|-----------|------|
| `FCFS.cpp` | First Come First Serve | Non-preemptive |
| `SJF.cpp` | Shortest Job First | Non-preemptive |
| `SRTF.cpp` | Shortest Remaining Time First | Preemptive |
| `LJF.cpp` | Longest Job First | Non-preemptive |
| `LRTF.cpp` | Longest Remaining Time First | Preemptive |
| `Round_Robin.cpp` | Round Robin | Preemptive |
| `Priority _Scheduling.cpp` | Priority Scheduling | Non-preemptive |

---

#### Queue Scheduling

| File | Algorithm | Description |
|------|-----------|-------------|
| `MultilevelQueue.cpp` | Multilevel Queue | Fixed-priority queue levels, no process migration |
| `MultilevelFeedbackQueue.cpp` | Multilevel Feedback Queue | Dynamic priority adjustment across queues |

---

#### Paging & Page Replacement

| File | Topic |
|------|-------|
| `Paging_Tecchnique.cpp` | Basic paging — logical to physical address translation |
| `FIFO_Page_Replacement.cpp` | FIFO page replacement |
| `LRU.cpp` | Least Recently Used replacement |
| `LFU.cpp` | Least Frequently Used replacement |

---

#### Memory Allocation

Fixed partition memory allocation strategies — each uses a different placement policy.

| File | Strategy | Description |
|------|----------|-------------|
| `Fixed_Partition_First_Fit.cpp` | First Fit | Allocate to the first sufficient partition found |
| `Fixed_Partition_Best_Fit.cpp` | Best Fit | Allocate to the smallest sufficient partition |
| `Fixed_Partition_Worst_Fit.cpp` | Worst Fit | Allocate to the largest available partition |

---

#### Deadlock Detection

| File | Method | Description |
|------|--------|-------------|
| `Bankers-Algorithm.cpp` | Banker's Algorithm | Safety check + resource-request algorithm |
| `Resource-Allocation-Graph.cpp` | RAG | Graph-based cycle detection for deadlock |
| `Wait-For-Graph.cpp` | Wait-For Graph | Simplified deadlock detection for single-instance resources |

---

#### IPC — Pipes

| File | Topic | Key Concepts |
|------|-------|--------------|
| `IPC_Unnamed_Pipe.cpp` | Unnamed (anonymous) pipe | `pipe()`, `fork()`, unidirectional communication |
| `Writter.c` | Named pipe writer | `mkfifo()`, `open()`, `write()`, FIFO filesystem entry |
| `Reader.c` | Named pipe reader | `open()`, `read()`, blocking behavior |

> 📄 See `IPC_NamedPipe/README.md` for a full walkthrough on creating and using named pipes.

---

#### Shared Memory

| File | Topic | Key Concepts |
|------|-------|--------------|
| `SharedMemory.c` | Shared memory IPC | `shmget()`, `shmat()`, `shmdt()`, `shmctl()`, `fork()` |
| `SharedMemoryCleanCode.c` | Cleaner structured version | Same system calls, improved code readability |

> 📄 See `Shared_Memory/README.md` for a step-by-step explanation with sample output.

---

#### Threading

| File | Topic | Key Concepts |
|------|-------|--------------|
| `Thread.c` | Basic thread creation | `pthread_create()`, `pthread_join()` |
| `Multithreading.cpp` | Multiple threads | Thread lifecycle, concurrent execution |
| `ThreadRaceMutex.cpp` | Race condition & mutex | `pthread_mutex_lock()`, `pthread_mutex_unlock()`, data safety |

---

#### File Management (Previous Year)

| File | Topic |
|------|-------|
| `File-Operation.c` | Basic file operations using system calls |
| `Single_Level_Directory.cpp` | Single-level directory structure simulation |
| `Two_Level_Directory.cpp` | Two-level directory structure simulation |

---

## Prerequisites

- GCC / G++ compiler
- Linux or WSL (Windows Subsystem for Linux) environment
- POSIX-compatible OS for system call programs (IPC, Threads, Shared Memory)

### Required Libraries (linked at compile time)

| Library | Flag | Purpose |
|---------|------|---------|
| POSIX Threads | `-lpthread` | Threading programs |
| Standard C/C++ | (default) | All other programs |

---

## Installation & Local Run

### 1. Clone the Repository

```bash
git clone https://github.com/MasudRanaMushfiq/Operating-System-Lab.git
cd Operating-System-Lab
```

### 2. Compile a C++ Program

```bash
g++ -o output "CPU Schedulling/FCFS.cpp"
./output
```

### 3. Compile a C Program

```bash
gcc -o output "Previous Year Resources/Shared_Memory/SharedMemory.c"
./output
```

### 4. Compile Threading Programs (requires pthread flag)

```bash
g++ -o output "Previous Year Resources/Thread/ThreadRaceMutex.cpp" -lpthread
./output
```

### 5. Run Named Pipe Programs (requires two terminals)

```bash
# Terminal 1 — start the reader first
gcc -o reader "Previous Year Resources/IPC_NamedPipe/Reader.c"
./reader

# Terminal 2 — then run the writer
gcc -o writer "Previous Year Resources/IPC_NamedPipe/Writter.c"
./writer
```

> ⚠️ Process management, IPC, shared memory, and threading programs must be run on **Linux or WSL** — they use POSIX system calls not available on Windows natively.

---

## Topics Covered

- **Process Management** — `fork()`, PID/PPID, parent-child process trees
- **CPU Scheduling** — FCFS, SJF, SRTF, Round Robin, Priority, LJF, LRTF, Multilevel Queue, Multilevel Feedback Queue
- **Memory Management** — Fixed partition allocation (First Fit, Best Fit, Worst Fit), Paging
- **Page Replacement** — FIFO, LRU, LFU
- **Deadlock** — Banker's Algorithm, Resource Allocation Graph, Wait-For Graph
- **Inter-Process Communication (IPC)** — Unnamed pipes, Named pipes (FIFO), Shared Memory
- **Threading** — Thread creation, multithreading, race conditions, mutex synchronization
- **File Management** — File I/O operations, Single-level directory, Two-level directory

---

## References

1. **Silberschatz, A., Galvin, P. B. & Gagne, G.** — *Operating System Concepts*, 10th Edition. Wiley, 2018.
2. **Tanenbaum, A. S.** — *Modern Operating Systems*, 4th Edition. Pearson, 2014.
3. **Linux Man Pages** — https://man7.org/linux/man-pages/
4. **GNU GCC Documentation** — https://gcc.gnu.org/onlinedocs/
5. **POSIX Threads Programming** — https://hpc-tutorials.llnl.gov/posix/

---

## 👨‍💻 Author

**Masud Rana Mushfiq**  
Dept. of Computer Science and Engineering  
University of Rajshahi

---

## ⭐ Support

If this repository helped you, consider giving it a ⭐ on GitHub!
