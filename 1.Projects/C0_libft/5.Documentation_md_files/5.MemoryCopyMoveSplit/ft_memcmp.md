# ft_memcmp
``` c 
int ft_memcmp(const void *s1, const void *s2, size_t n);
```
<br>
<br>

# Manual
**Brief:**  
Compares the first `n` bytes of two memory areas.

**File:** `ft_memcmp.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
- `string.h `

**Description:**  
This function compares the first `n` bytes (each interpreted as `unsigned char`) of the memory areas `s1` and `s2`.

**Input Values:**  
* `s1`: Pointer to the first memory area to be compared.
* `s2`: Pointer to the second memory area to be compared.
* `n`: The number of bytes to be compared.

**Return Value:**  
* An integer less than, equal to, or greater than zero if the first `n` bytes of `s1` is found, respectively, to be less than, to match, or be greater than the first `n` bytes of `s2`. 

**Note:**  
- The sign of a non-zero return value is determined by the sign of the difference between the first pair of bytes (interpreted as `unsigned char`) that differ in `s1` and `s2`.
- If `n` is zero, the function returns zero.

**Example:**  
```c
char str1[] = "abcdef";
char str2[] = "abcde";

int result = ft_memcmp(str1, str2, 5); // result is 0 (first 5 bytes match)
result = ft_memcmp(str1, str2, 6); // result is greater than 0 ('f' > '\0')
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1 = (const unsigned char *)s1;
	const unsigned char	*str2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}


```