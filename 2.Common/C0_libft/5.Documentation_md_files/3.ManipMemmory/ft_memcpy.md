# ft_memcpy - `void *ft_memcpy(void *dst, const void *src, size_t n);`
<br>
<br>

# Manual
**Brief:**
Copies `n` bytes from memory area `src` to memory area `dst`.

**File:** `ft_memcpy.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**
* `string.h `

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
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
/*
** ft_memcpy: Byte-wise Memory Copy
**
** Purpose:  Copies 'n' bytes of memory from the source location ('src')
**           to the destination location ('dst'). This function is designed
**           to handle overlapping memory regions.
**
** Parameters:
**  - dst: A pointer to the destination memory location.
**  - src: A pointer to the source memory location (read-only).
**  - n: The number of bytes to copy.
**
** Return Value:
**  - A pointer to the beginning of the destination memory location ('dst').
**
** Behavior:
**  1. Checks for null pointers: If either 'dst' or 'src' is null, returns 'dst'.
**  2. Casts pointers: Converts 'dst' and 'src' to unsigned char pointers for byte-level access.
**  3. Copies memory: Iterates over 'n' bytes, copying each byte from 'src' to 'dst'.
**  4. Returns destination: Returns the original 'dst' pointer for convenience.
**
** Notes:
**  - This implementation is similar to the standard C library's memcpy.
**  - It is designed to be safe and efficient for copying arbitrary data types.
*/

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *tmp_dst; 
    unsigned char   *tmp_src; 

    // Null pointer check
    if (dst == (void *)0 && src == (void *)0) {
        return dst; 
    }

    // Typecasting for byte-level access
    tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;

    // Main copy loop
    while (n > 0) 
    {
        // Copy one byte and increment both pointers
        *(tmp_dst++) = *(tmp_src++); 
        n--; 
    }

    return dst; 
}


```