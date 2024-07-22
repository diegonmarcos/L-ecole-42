# ft_strdup - `char *ft_strdup(const char *s1);`

**Brief:**
Creates a duplicate of the string `s1`.

**File:** `ft_strdup.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**
* `string.h`

**Description:**
The `ft_strdup()` function returns a pointer to a new string which is a duplicate of the string `s1`.  Memory for the new string is obtained with `malloc(3)`, and can be freed with `free(3)`.

**Input Values:**
* `s1`: The string to be duplicated.

**Return Value:**
* On success, the `ft_strdup()` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available, with `errno` set to indicate the error.

**Note:**
- The caller is responsible for freeing the memory allocated for the new string using the `free()` function when it is no longer needed.
- This function is a core part of string manipulation in C and is frequently used when you need to create an independent copy of a string to modify without affecting the original.


**Example:**
```c
char *original = "Hello, world!";
char *copy = ft_strdup(original);
printf("%s\n", copy);  // Output: Hello, world!

// Modifying the copy doesn't affect the original
copy[0] = 'J';
printf("%s\n", copy);   // Output: Jello, world!
printf("%s\n", original); // Output: Hello, world!

free(copy); // Always free the allocated memory
