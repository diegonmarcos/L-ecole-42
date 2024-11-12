# ft_strjoin 
``` c 
char *ft_strjoin(char const *s1, char const *s2);
```
<br>
<br>

# Manual
**Brief:**  
Concatenates two strings (`s1` and `s2`) into a new string.

**File:** `ft_strjoin.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**



**Description:**  
This function allocates a new string and concatenates `s1` and `s2` into it. The new string is null-terminated (`'\0'`).

**Input Values:**  
* `s1`: The first string to be concatenated.
* `s2`: The second string to be concatenated.

**Return Value:**  
* The newly created string containing the concatenation of `s1` and `s2`.
* `NULL` if the allocation fails.

**Note:**  
- The memory for the new string is allocated using `malloc()`.
- It's the caller's responsibility to free the returned string using `free()` when it's no longer needed. 

**Example:**  
```c
char *str1 = "Hello, ";
char *str2 = "world!";
char *result = ft_strjoin(str1, str2);

printf("%s\n", result); // Output: Hello, world!
free(result);          // Free the allocated memory
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = 0;
	return (res);
}

```