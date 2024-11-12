# ft_substr
``` c 
char *ft_substr(char const *s, unsigned int start, size_t len);
```
<br>
<br>

# Manual
**Brief:**  
Returns a substring from the string `s`.

**File:** `ft_substr.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**



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
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
#include "libft.h"
#include <stdlib.h> // For malloc and free

char *ft_substr(char const *s, unsigned int start, size_t len) 
{
    size_t  i;
    char    *str;  // Declare a pointer to store the resulting substring.

    // 1. Check if the input string is NULL
    if (!s)
        return (NULL);  // Return NULL if the input string is invalid (NULL pointer).

    // 2. Check if the start index is beyond the string's length
    if (start > ft_strlen(s))
        return (ft_strdup(""));  // If so, return an empty string ("").

    // 3. Adjust the length if it exceeds the remaining characters in the string
    if (len > ft_strlen(s + start))  // Calculate remaining length after 'start'
        len = ft_strlen(s + start);  // Adjust len to fit remaining length if needed

    // 4. Allocate memory for the substring
    str = ft_calloc(len + 1, sizeof(char)); // Allocate space for substring + null terminator
    if (!str)
        return (NULL); // Return NULL if memory allocation fails.

    // 5. Copy characters to the new substring
    i = 0;  // Initialize the index for copying
    while (i < len)
    {
        str[i] = s[start + i];  // Copy each character from the original string at the appropriate offset
        i++;
    }

    // 6. Null-terminate the substring
    str[i] = '\0';  // Ensure the substring is null-terminated

    return (str);  // Return the pointer to the new substring
}


```
