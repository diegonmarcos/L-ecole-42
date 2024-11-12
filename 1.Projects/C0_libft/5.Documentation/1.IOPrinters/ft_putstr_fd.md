# ft_putstr_fd 
``` c
void ft_putstr_fd(char *s, int fd);
```
<br>
<br>

# Manual
**Brief:**
Outputs the string 's' to the given file descriptor.

**File:** `ft_putstr_fd.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**
* `unistd.h`

**Description:**
The `ft_putstr_fd()` function writes the string `s` to the file descriptor `fd`. It iterates over each character of the string and writes it to the specified file descriptor using the `write()` system call.

**Input Values:**
* `s`: The string to be written.
* `fd`: The file descriptor to write to.

**Return Value:**
* None.

**Note:**
- The function assumes that the file descriptor `fd` is valid and open for writing.
- If the string `s` is NULL, the function does nothing.
- Common file descriptors are:
    - 0: Standard input (stdin)
    - 1: Standard output (stdout)
    - 2: Standard error (stderr)

**Example:**
```c
char *message = "Hello from ft_putstr_fd!";
ft_putstr_fd(message, 1);  // Outputs the message to standard output (stdout).
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

```