# ft_putnbr_fd 
``` c
void ft_putnbr_fd(int n, int fd);
```
<br>
<br>

# Manual
**Brief:**  
Outputs the integer `n` to the given file descriptor.

**File:** `ft_putnbr_fd.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
* `unistd.h`

**Description:**
This function outputs the integer `n` to the given file descriptor `fd`. It handles positive numbers, negative numbers, and zero.

**Input Values:**  
* `n`: The integer to be output.
* `fd`: The file descriptor on which to write.

**Return Value:**
* None.

**Note:**  
- The function assumes that the file descriptor `fd` is valid and open for writing.
- If `n` is `INT_MIN` (-2147483648), the function directly writes "-2147483648" to the file descriptor as it is not possible to directly convert it to its positive equivalent.

**Example:**  
```c
ft_putnbr_fd(42, 1);      // Outputs "42" to standard output (stdout)
ft_putnbr_fd(-123, 2);   // Outputs "-123" to standard error (stderr)
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

```