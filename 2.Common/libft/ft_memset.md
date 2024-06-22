# ft_memset - **Synopsis:** - `void *ft_memset(void *b, int c, size_t len);`

**Brief:**  
Fills the first `len` bytes of the memory area pointed to by `b` with the constant byte `c`.

**File:** `ft_memset.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**  
* Standard C Library

**Description:**
The `ft_memset()` function fills the first `len` bytes of the memory area pointed to by `b` with the constant byte `c`. It returns a pointer to the memory area `b`.

**Input Values:**
* `b`: Pointer to the block of memory to fill.
* `c`: The value to be set. The value is passed as an `int`, but the function fills the block of memory using the `unsigned char` conversion of this value.
* `len`: The number of bytes to be set to the value.

**Return Value:**
* A pointer to the memory area `b`.

**Note:**
- The function does not check whether the memory area pointed to by `b` is valid or large enough to accommodate `len` bytes. 
- The function is often used to initialize a block of memory to a specific value, such as filling a character array with null terminators ('\0') or an integer array with zeros.

**Example:**
```c
char str[15] = "Hello"; 
ft_memset(str + 6, '.', 5); // Fills the characters after "Hello" with dots.
// str now contains "Hello....."
