# Tools

## Alias and Scripts
##### Alias
alias `gcl='git clone'  `  
alias `ccc='cc -Wall -Wextra -Werror'`  
alias `push='git add . && git commit -m "update" && git push'`  
alias `norm="norminette -R CheckForbiddenSourceHeader"`

##### Scrpits



## Flags
##### Commands
``cc -Wall -Wextra -Werror your_source.c``

## Paco
##### Commands
* ``paco``
* ``paco -s``

## Valgrind
##### Commands
* ``cc -g your_source.c``
* ``valgrind --leak-check=full ./a.out``

##### Details  
Memory leaks: Information about allocated memory blocks that were not freed.
Invalid memory access: Details about attempts to read or write to memory your program doesn't own.
Use of uninitialized values: Warnings about using variables without assigned values.

## Asan
##### Commands
* ``cc -g -fsanitize=address -fno-omit-frame-pointer your_source.c``
* Run your program as you normally would. ASan will monitor memory access at runtime.

##### Details
If ASan detects a memory error, it will print a detailed report to the console, including:
The type of error (e.g., use-after-free, buffer overflow).
The source file and line number where the error occurred.
A stack trace showing the function calls leading to the error.

## LLDB Debugger
##### Commands
* ``cc ft_ft.c -g``
* ```lldb ./a.out```
* ```b main```
* ``run``
* ``gui``