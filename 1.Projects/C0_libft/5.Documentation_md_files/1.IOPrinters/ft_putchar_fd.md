# ft_putchar_fd
``` c 
		void ft_putchar_fd(char c, int fd);
```
<br>
<br>

# Manual
**Brief:**  
Outputs the character `c` to the given file descriptor.

**File:** `ft_putchar_fd.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
* `unistd.h`

**Description:**  
This function writes a single character `c` to the file descriptor `fd`. File descriptors are typically used to represent files, but can also be used to represent other input/output resources, like standard output (stdout) or standard error (stderr).

**Input Values:**  
* `c`: The character to be written.
* `fd`: The file descriptor to write to.

**Return Value:**  
* None.

**Note:**  
- The function assumes that the file descriptor `fd` is valid and open for writing.
- If an error occurs during the write operation, the function does not provide any explicit error handling.
- Common file descriptors are:
    - 0: Standard input (stdin)
    - 1: Standard output (stdout)
    - 2: Standard error (stderr)

**Example:**  
```c
ft_putchar_fd('A', 1);   // Outputs 'A' to standard output (stdout)
ft_putchar_fd('\n', 2);  // Outputs a newline character to standard error (stderr)
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

```