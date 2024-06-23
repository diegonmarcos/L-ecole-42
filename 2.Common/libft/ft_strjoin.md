# ft_strjoin - `char *ft_strjoin(char const *s1, char const *s2);`

**Brief:**  
Concatenates two strings (`s1` and `s2`) into a new string.

**File:** `ft_strjoin.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



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
