# ft_memcpy
``` c 
void *ft_memcpy(void *dst, const void *src, size_t n);
```
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

## Learnings

Absolutely! Here's why we convert `dst` and `src` to `unsigned char` pointers in the `ft_memcpy` function:

**1. Byte-Level Precision:**

* `void *` pointers are generic and don't have a specific data type associated with them. This means the compiler doesn't know the size of the elements they point to.
* By casting to `unsigned char *`, we explicitly tell the compiler to treat the memory as a sequence of individual bytes. This allows us to copy the data byte-by-byte, which is crucial for handling arbitrary data types (e.g., structures, arrays of different types).

**2. Avoiding Alignment Issues:**

* Some data types, especially on certain architectures, require specific alignment in memory (e.g., integers might need to start at addresses divisible by 4).
* If we didn't use byte-level copying, directly accessing and copying these types using a `void *` could lead to alignment issues, causing errors or unexpected behavior.

**3. Safety:**

* `unsigned char` is guaranteed to be the smallest addressable unit of memory (typically 8 bits or 1 byte). By working with bytes, we ensure that we are copying the exact representation of the data in memory, without any potential padding or unused bits.

**4. Flexibility:**

* This approach works for any data type because all data in memory is ultimately just a sequence of bytes. It doesn't matter if you're copying integers, floating-point numbers, structures, or even code – the byte-by-byte approach is universally applicable.

**Example:**

Imagine you have a structure:

```c
struct data {
    int num;
    char str[5];
};
```

If you try to copy this structure directly using `void *` pointers, you might encounter alignment issues because the `str` array might not start at an address divisible by 4 (the typical alignment for integers). By copying byte-by-byte, you avoid this problem and ensure a correct copy.

**In summary:** Casting to `unsigned char *` provides byte-level access, avoids alignment issues, ensures data safety, and offers flexibility to copy data of any type correctly.
