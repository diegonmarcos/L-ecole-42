# ft_substr - **Synopsis:** - `char *ft_substr(char const *s, unsigned int start, size_t len);`

**Brief:**  
Returns a substring from the string `s`.

**File:** `ft_substr.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



**Description:**  
Allocates (with `malloc(3)`) and returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`.

**Input Values:**  
* `s`: The string from which to create the substring.
* `start`: The start index of the substring in the string `s`.
* `len`: The maximum length of the substring.

**Return Value:**  
* The substring. 
* `NULL` if the allocation fails.

**Note:**  
- If `start` is greater than or equal to the length of `s`, an empty string is returned.
- If `len` is greater than the number of characters remaining in `s` starting from `start`, the substring will contain all the remaining characters from `start` until the end of `s`.
- It is the caller's responsibility to free the memory allocated for the substring.

**Example:**  
```c
char *str = "Hello, world!";
char *substr = ft_substr(str, 7, 5);  

printf("%s\n", substr); // Output: world
free(substr);
