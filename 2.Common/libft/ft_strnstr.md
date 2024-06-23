# ft_strnstr - `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`

**Brief:**  
Locates the first occurrence of the null-terminated string `needle` in the string `haystack`, where not more than `len` characters are searched.

**File:** `ft_strnstr.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**  
* Standard C Library

**Description:**  
This function finds the first occurrence of the null-terminated string `needle` in the string `haystack`, where not more than `len` characters are searched. Characters that appear after a `\0` character are not searched. Since the `strnstr()` function is a FreeBSD specific API, it should only be used when portability is not a concern.

**Input Values:**  
* `haystack`: The string to be searched.
* `needle`: The string to be searched for.
* `len`: The maximum number of characters to be searched.

**Return Value:**  
* If `needle` is an empty string, `haystack` is returned; 
* If `needle` occurs in `haystack`, the function returns a pointer to the first character of the first occurrence of `needle`; 
* Otherwise, a null pointer is returned.

**Note:**
- If `needle` is not found within the first `len` characters of `haystack`, the function returns `NULL`.
- If `haystack` is NULL and `len` is not zero, the behavior is undefined.
- If `needle` is NULL, the behavior is undefined.

**Example:**  
```c
char *str = "Foo Bar Baz";
char *ptr = ft_strnstr(str, "Bar", 10); // ptr points to "Bar" in str
ptr = ft_strnstr(str, "Bar", 3); // ptr is NULL
