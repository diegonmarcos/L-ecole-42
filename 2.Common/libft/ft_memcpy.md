# ft_memcpy - `void *ft_memcpy(void *dst, const void *src, size_t n);`

**Brief:**
Copies `n` bytes from memory area `src` to memory area `dst`.

**File:** `ft_memcpy.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**
* Standard C Library

**Description:**
The `ft_memcpy()` function copies `n` bytes from memory area `src` to memory area `dst`. If `dst` and `src` overlap, behavior is undefined. Applications in which `dst` and `src` might overlap should use `memmove(3)` instead.

**Input Values:**
* `dst`: Pointer to the destination array where the content is to be copied.
* `src`: Pointer to the source of data to be copied.
* `n`: The number of bytes to be copied.

**Return Value:**
* The original value of `dst`.

**Note:**
- The behavior of this function is undefined if the memory areas overlap. Use `ft_memmove()` for overlapping areas.
- If `dst` or `src` is NULL, and `n` is non-zero, the behavior is undefined.
- If `n` is zero, the function does nothing and returns `dst`.

**Example:**
```c
char src[] = "Hello, world!";
char dst[50];
ft_memcpy(dst, src, strlen(src) + 1); // Copy the string including the null terminator
// dst now contains "Hello, world!"
