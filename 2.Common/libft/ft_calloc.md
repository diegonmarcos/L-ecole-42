# ft_calloc - `void *ft_calloc(size_t count, size_t size);`

**Brief:**
Allocates memory for an array of `count` elements, each of size `size` bytes, and initializes all bytes to zero.

**File:** `ft_calloc.c` / **Date:** 2024-06-22
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**
* libft

**Description:**
The `ft_calloc()` function contiguously allocates enough space for `count` objects that are `size` bytes of memory each and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero.

**Input Values:**
* `count`: The number of elements to be allocated.
* `size`: The size in bytes of each element.

**Return Value:**
* A pointer to the allocated memory. If the allocation fails, the function returns `NULL`.

**Note:**
- It is the caller's responsibility to free the allocated memory using the `free()` function when it is no longer needed.
- The calculation of `count * size` may result in integer overflow, leading to undefined behavior. Be mindful of the potential risks when using large values for `count` or `size`.

**Example:**
```c
int *arr = ft_calloc(5, sizeof(int)); 
// arr now points to a block of memory big enough to hold 5 integers, all initialized to zero.
```
