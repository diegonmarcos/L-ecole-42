# ft_strchr - `char *ft_strchr(const char *s, int c);`

**Brief:**
Locates the first occurrence of character `c` (converted to a `char`) in the string pointed to by `s`.

**File:** `ft_strchr.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**
* `string.h`

**Description:**
The `ft_strchr()` function locates the first occurrence of the character `c` (converted to a `char`) in the string pointed to by `s`. The terminating null character is considered to be part of the string; therefore, if `c` is `\0`, the function locates the terminating `\0`.

**Input Values:**
* `s`: The string to be searched.
* `c`: The character to be located.

**Return Value:**
* A pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found.

**Note:**
- The function returns a pointer to the first occurrence of `c`, including the terminating null character if `c` is `\0`.

**Example:**
```c
char *str = "Hello, world!";
char *ptr = ft_strchr(str, 'o'); // ptr points to the first 'o' in str
