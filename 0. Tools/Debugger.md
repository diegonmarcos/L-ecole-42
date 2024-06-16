## LLDB Debugging Commands (42 Common Core)

**Compilation (gcc):**

Bash

```
cc ft_fun.c -g  # Compile with debugging symbols (-g)
```

**Debugging (lldb):**

Bash

```
lldb a.out       # Start LLDB and load the executable 'a.out'
```

**Breakpoints:**

Bash

```
b main          # Set a breakpoint at the start of the 'main' function
b <function_name> # Set a breakpoint at any other function
```

**Execution:**

Bash

```
run             # Start running the program (or 'r' for short)
c               # Continue execution after hitting a breakpoint
```

**Stepping Through Code:**

Bash

```
s               # Step over the current line (execute it as one step)
n               # Step into the next line (enter functions if called)
```

**GUI Mode:**

Bash

```
gui             # Launch the LLDB graphical user interface (full screen)
```

**Viewing Variables:**

Bash

```
p <variable_name>  # Print the current value of a variable
v                # View all local variables (useful after hitting a breakpoint)
```

**Additional Tips:**

- Use the `Tab` key for autocompletion of commands and file names.
- `help` in LLDB provides a list of available commands and their descriptions.
- Refer to the LLDB documentation for more advanced features and debugging techniques.

**Example Workflow:**

1. Compile your code with the `-g` flag to include debugging symbols.
2. Start LLDB and load your executable.
3. Set breakpoints at relevant locations (e.g., `main` function, specific lines).
4. Run the program and use `s` and `n` to step through the code.
5. Inspect variables using `p` and `v` as needed.
6. Continue execution or set new breakpoints as required.

Let me know if you'd like any further refinements or have more questions!