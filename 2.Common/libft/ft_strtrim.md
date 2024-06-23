# ft_strtrim - `char *ft_strtrim(char const *s1, char const *set);`

**Brief:**  
Trims the characters in `set` from the beginning and end of `s1`.

**File:** `ft_strtrim.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



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
