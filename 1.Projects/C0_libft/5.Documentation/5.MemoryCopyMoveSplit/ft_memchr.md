# ft_memchr 
``` c 
void *ft_memchr(const void *s, int c, size_t n);
```
<br>
<br>

# Manual
**Brief:**  
Searches for the first occurrence of a byte (interpreted as unsigned char) in a block of memory.

**File:** `ft_memchr.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
* `string.h `

**Description:**
The `ft_memchr()` function scans the initial `n` bytes of the memory area pointed to by `s` for the first instance of `c`. Both `c` and the bytes of the memory area pointed to by `s` are interpreted as `unsigned char`.

**Input Values:**
* `s`: Pointer to the memory area to be searched.
* `c`: The character (interpreted as `unsigned char`) to be located.
* `n`: The number of bytes to be examined.

**Return Value:**
* A pointer to the located character, or `NULL` if the character does not occur in the given memory area.

**Note:**
- The function stops searching as soon as a match is found.
- If `n` is zero, the function returns `NULL`.

**Example:**
```c
char str[] = "Hello, world!";
char *ptr = ft_memchr(str, 'w', 13); 
// ptr now points to the first 'w' in str
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	size_t				i;
	unsigned char		uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}


```