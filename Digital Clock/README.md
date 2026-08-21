# C Terminal Digital Clock

A lightweight, real-time digital clock written in C for Linux/POSIX terminal environments.

## Features

- **Real-Time Updates:** Displays current local system time updating every second.
- **In-Place Refresh:** Uses carriage return (`\r`) and buffer flushing (`fflush`) to avoid screen clutter and flicker.
- **Zero Overhead:** Negligible CPU usage with standard `<unistd.h>` sleep handling.

## Prerequisites

- GCC compiler (`gcc`)
- Standard C libraries (`libc`)

## Compilation & Execution

1. Open your terminal in the directory containing `clock.c`.
2. Compile the source code:
   ```bash
   gcc clock.c -o clock
   