# ft_strrchr 
``` c 
char *ft_strrchr(const char *s, int c);
```
<br>
<br>

# Manual
**Brief:**  
Locates the last occurrence of character `c` (converted to a `char`) in the string pointed to by `s`.

**File:** `ft_strrchr.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
* `string.h`

**Description:**  
The `ft_strrchr()` function locates the last occurrence of the character `c` (converted to a `char`) in the string pointed to by `s`. The terminating null character is considered to be part of the string; therefore, if `c` is `\0`, the function locates the terminating `\0`.

**Input Values:**  
* `s`: The string to be searched.
* `c`: The character to be located.

**Return Value:**  
* A pointer to the last occurrence of the character `c` in the string `s`, or `NULL` if the character is not found.

**Note:**
- The function returns a pointer to the last occurrence of `c`, including the terminating null character if `c` is `\0`.

**Example:**  
```c
char *str = "Hello, world!";
char *ptr = ft_strrchr(str, 'o'); // ptr points to the second 'o' in str
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C

char	*ft_strrchr(const char *s, int c)
{
	char			*res;
	char			cc;

	cc = (char)c;
	res = NULL;
	while (*s)
	{
		if (*s == cc)
			res = (char *)s;
		s++;
	}
	if (*s == cc)
		res = (char *)s;
	return (res);
}

```