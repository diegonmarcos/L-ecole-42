# ft_strtrim 
``` c 
char *ft_strtrim(char const *s1, char const *set);
```
<br>
<br>

# Manual
**Brief:**  
Trims the characters in `set` from the beginning and end of `s1`.

**File:** `ft_strtrim.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**



**Description:**  
This function allocates and returns a copy of the string `s1` with the characters specified in `set` removed from the beginning and the end of the string.

**Input Values:**  
* `s1`: The string to be trimmed.
* `set`: The reference set of characters to trim.

**Return Value:**  
* The trimmed string.
* `NULL` if the allocation fails.

**Note:**  
- The original string `s1` is not modified.
- The trimmed string is a newly allocated copy; it's the caller's responsibility to free it using `free()` when no longer needed.
- If `set` is an empty string, a duplicate of `s1` is returned.

**Example:**  
```c
char *str = "  \t  Hello, world! \n  ";
char *set = " \t\n";
char *trimmed = ft_strtrim(str, set);

printf("%s\n", trimmed);  // Output: Hello, world!
free(trimmed);            // Free the trimmed string
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C

static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

```