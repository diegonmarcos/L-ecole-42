# ft_strncmp 
``` c 
int ft_strncmp(const char *s1, const char *s2, size_t n);
```
<br>
<br>

# Manual
**Brief:**  
Compares the first (at most) `n` bytes of two strings `s1` and `s2`.

**File:** `ft_strncmp.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
* `string.h`

**Description:**
The `ft_strncmp()` function compares not more than `n` characters (characters that follow a null character are not compared) from the array pointed to by `s1` to the array pointed to by `s2`. 

**Input Values:**  
* `s1`: The first string to be compared.
* `s2`: The second string to be compared.
* `n`: The maximum number of characters to compare.

**Return Value:**
* An integer less than, equal to, or greater than zero if `s1` (or the first `n` bytes thereof) is found, respectively, to be less than, to match, or be greater than `s2`.

**Note:**
- The comparison is done lexicographically. Characters that appear later in the alphabet are considered "greater."
- The comparison is case-sensitive.

**Example:**  
```c
char str1[] = "Hello";
char str2[] = "Help";

int result = ft_strncmp(str1, str2, 4); // result is 0 (first 4 chars match)
result = ft_strncmp(str1, str2, 5); // result is less than 0 ('o' < 'p')
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

```