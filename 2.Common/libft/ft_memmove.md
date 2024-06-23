# ft_memmove - `void *ft_memmove(void *dst, const void *src, size_t len);`

**Brief:**  
Copies `len` bytes from memory area `src` to memory area `dst`. The memory areas may overlap.

**File:** `ft_memmove.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
* `string.h `

**Description:**  
The `ft_memmove()` function copies `len` bytes from the memory area `src` to the memory area `dst`. Unlike `ft_memcpy()`, `ft_memmove()` is designed to handle situations where the source and destination memory areas overlap.

**Input Values:**  
* `dst`: Pointer to the destination array where the content is to be copied.
* `src`: Pointer to the source of data to be copied.
* `len`: The number of bytes to be copied.

**Return Value:**  
* The original value of `dst`.

**Note:**  
- This function is safe to use when the source and destination memory areas overlap.
- If `dst` or `src` is `NULL`, and `len` is non-zero, the behavior is undefined.
- If `len` is zero, the function does nothing and returns `dst`.

**Example:**  
```c
char str[] = "Hello, world!";
ft_memmove(str + 7, str, 6); // Overlapping move
// str now contains "Hello, Hello
