### 42 Common Core Curriculum: Circle 3

**Projects:**

* **M.3:**
    * Minishell
    * Philosophers

**Topics (Advanced System & Network Programming):**

1.  **Advanced Shell Features:**
    *   Building a more complex shell with features like input/output redirection, pipes, and job control.
    *   Parsing and executing command lines with multiple commands and arguments.
    *   Handling environment variables and shell built-in commands.

2.  **Concurrency and Synchronization:**
    *   Understanding threads, processes, and their differences.
    *   Using mutexes, semaphores, and condition variables for synchronization.
    *   Solving classic synchronization problems like the dining philosophers problem.

3.  **Network Programming (Advanced):**
    *   Working with more complex network protocols (e.g., HTTP, FTP).
    *   Building client-server applications with multiple clients.
    *   Error handling and network security considerations.

4.  **Unix System Programming (Advanced):**
    *   Working with signals and signal handlers.
    *   Interacting with the kernel using system calls.
    *   Understanding memory management and virtual memory.

5.  **Projects and Challenges:**
    *   The Minishell project is the centerpiece of this circle, challenging you to create a functional shell similar to Bash or Zsh.
    *   The Philosophers project explores concurrency and synchronization concepts in a practical scenario. 
    *   You may also encounter other projects that delve deeper into network programming, system-level debugging, or performance optimization.
<br>

---
---
---

<br>

## Formulas and Syntaxes


**Minishell**

*   **System Calls (Advanced):**
    *   `fork()`: Creating new processes (essential for executing commands).
    *   `execve()`: Replacing the current process with a new program.
    *   `waitpid()`: Waiting for child processes to terminate.
    *   `pipe()`: Creating pipes for inter-process communication (IPC).
    *   `dup2()`: Redirecting input/output streams.
    *   `signal()`: Handling signals (e.g., `SIGINT` for Ctrl+C).
    *   `chdir()`: Changing the current working directory.

*   **String Manipulation (Advanced):**
    *   Tokenization: Splitting the command line into tokens (words).
    *   Environment Variable Handling: Accessing and modifying environment variables.
    *   Command Line Parsing: Understanding different shell syntax (e.g., quoting, escaping, wildcards).
    *   Path Resolution: Searching for executable files in the PATH environment variable.

*   **Data Structures:**
    *   Linked Lists: For storing command history, process information, or other data.
    *   Arrays: For storing tokens or arguments.

*   **Signal Handling:**
    *   Using `signal()` or `sigaction()` to define custom signal handlers for handling signals like `SIGINT` (Ctrl+C), `SIGQUIT` (Ctrl+\), and `SIGCHLD` (child process termination).

**Philosophers**

*   **Threading (pthreads):**
    *   `pthread_create()`: Creating new threads.
    *   `pthread_join()`: Waiting for threads to finish.
    *   `pthread_mutex_init()`, `pthread_mutex_lock()`, `pthread_mutex_unlock()`: Using mutexes for synchronization.

*   **Synchronization Primitives:**
    *   Mutexes: Protecting shared resources (e.g., forks) from simultaneous access by multiple threads.
    *   Semaphores: Controlling access to a limited number of resources.
    *   Condition Variables: Signaling between threads when conditions change.

*   **Concurrency Concepts:**
    *   Understanding race conditions, deadlocks, and other concurrency issues.
    *   Designing algorithms that avoid these problems and ensure correct behavior in a multi-threaded environment.

**General C Syntax (Advanced):**

*   **Pointers to Functions:**  For passing functions as arguments (e.g., to `ft_foreach` or signal handlers).
*   **Error Handling:** Robust error handling is even more critical in these projects due to the increased complexity of multi-processing and multi-threading.

**Additional Tips:**

*   **Debugging:** Mastering the use of debuggers like `gdb` becomes essential for diagnosing complex issues in multi-threaded programs.
*   **Resource Management:** Carefully manage file descriptors, threads, and other resources to avoid leaks and errors.
*   **Code Organization:** Modularity and clean code structure are crucial for maintaining large projects like the Minishell.
*   **Algorithms:**  Familiarity with basic algorithms and data structures will be helpful, especially in the Philosophers project.