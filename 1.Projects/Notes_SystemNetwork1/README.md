### 42 Common Core Curriculum: Circle 2 -System & Network Programming 1

## Curricullum
**Projects:**

* **M.2:**
    * push_swap
    * pipex (or minitalk)
    * fdf (or so_long or fract-ol)

**Topics (System & Network Programming):**

1.  **System Calls:**
    *   Understanding how programs interact with the operating system.
    *   Working with file descriptors, processes, and signals.
    *   Basic system calls (open, read, write, close, fork, execve, wait, etc.).

2.  **Processes and Inter-Process Communication (IPC):**
    *   Process creation and management.
    *   Understanding pipes, FIFOs, signals, and other IPC mechanisms.
    *   Implementing communication between processes.

3.  **File I/O:**
    *   Low-level file operations (open, read, write, close, seek, etc.).
    *   File permissions and access control.
    *   Working with different file types (regular files, directories, symbolic links).

4.  **Networking:**
    *   Introduction to network protocols (TCP, UDP).
    *   Socket programming for client-server communication.
    *   Basic network operations (connecting, sending/receiving data).

5.  **Shell Basics:**
    *   Understanding how shells work.
    *   Writing simple shell scripts.
    *   Working with environment variables and command-line arguments.

6.  **Projects and Challenges:**
    *   You'll likely work on projects that involve building small utilities, network tools, or even simplified versions of shell commands.
    *   These projects aim to deepen your understanding of system-level programming and how programs interact with the operating system and the network.  
	<br>
	---
	---
	---
	<br>

## Main Functions and Syntaxes

**Push_Swap**

*   **Sorting Algorithms:**
    *   Understanding and implementing various sorting algorithms like bubble sort, insertion sort, merge sort, quick sort, etc.
    *   Analyzing their time and space complexity to choose the most efficient algorithm for the given problem constraints.
*   **Data Structures:**
    *   Stacks: Using stacks to store and manipulate elements during sorting operations.
    *   Linked Lists: Potentially using linked lists for more flexible data management in some sorting algorithms.
*   **Recursion:**
    *   Some sorting algorithms, like merge sort and quick sort, are often implemented recursively.

**Pipex (or Minitalk)**

*   **System Calls:**
    *   `fork()`: Creating new processes.
    *   `pipe()`: Creating pipes for inter-process communication.
    *   `dup2()`: Duplicating file descriptors to redirect input/output.
    *   `execve()`: Replacing the current process with a new program.
    *   `waitpid()`: Waiting for a child process to finish.
*   **Signals:**
    *   `kill()`: Sending signals to other processes.
    *   `signal()` or `sigaction()`: Handling signals in your program.
*   **Bitwise Operations:**
    *   If you choose Minitalk, you'll likely use bitwise operators (`&`, `|`, `>>`, `<<`) to encode and decode information in signals.

**Fdf (or So_long or Fract-ol)**

*   **Graphics (MinilibX):**
    *   If you choose Fdf, So_long, or Fract-ol, you'll be using MinilibX, a simple graphics library.
    *   Functions like `mlx_init()`, `mlx_new_window()`, `mlx_pixel_put()`, `mlx_loop()`.
*   **Event Handling (MinilibX):**
    *   Using MinilibX functions for handling keyboard and mouse events.
*   **Mathematics:**
    *   If you choose Fract-ol, you'll need a good understanding of complex numbers and fractal geometry.
    *   Fdf may also require some basic linear algebra for transformations.
*   **Data Structures:**
    *   Arrays and matrices for representing the map or terrain in Fdf or So_long.

**General C Syntax:**

*   **Pointers:**  You'll heavily use pointers for manipulating data structures and passing information between functions.
*   **Arrays:**  Especially important for Fdf and So_long projects.
*   **Structures:** Useful for organizing complex data (e.g., representing points or nodes).
*   **String Manipulation:** For parsing input and constructing commands.


