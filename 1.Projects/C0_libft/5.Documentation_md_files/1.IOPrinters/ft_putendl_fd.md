# ft_putendl_fd 
``` c
void ft_putendl_fd(char *s, int fd);
```
<br>
<br>

# Manual
**Brief:**
Outputs the string `s` to the given file descriptor, followed by a newline.

**File:** `ft_putendl_fd.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**
* `unistd.h`

**Description:**
The `ft_putendl_fd()` function writes the string `s` to the file descriptor `fd`, followed by a newline character ('\n'). This is equivalent to calling `ft_putstr_fd(s, fd)` followed by `ft_putchar_fd('\n', fd)`.

**Input Values:**
* `s`: The string to be written.
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
ft_putendl_fd("Hello, world!", 1);  
// Outputs "Hello, world!" followed by a newline to standard output.
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

```