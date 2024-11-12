# ft_strlen : String Length Calculation
``` c
size_t ft_strlen(const char *str) 
```
<br>
<br>

# Manual
### 1. Description

`ft_strlen` is a function designed to determine the length of a null-terminated string in the C programming language. It iterates through the characters of the string until it encounters a null terminator ('\0'), then returns the count of characters before the null terminator.
### 2. The Code
```C
size_t ft_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
```

### 3. Examples of Use
```C
#include <stdio.h> // For printf

int main() {
    char *text = "Hello, world!";
    size_t length = ft_strlen(text);
    printf("Length of the string: %zu\n", length); // Output: 13
    return 0;
}
```

**Explanation of Example** The example code first sets a string to `text`. Then, the ft_strlen function gets the length of the string and returns the number of characters. The result is printed on the screen.  

### 4. Technical Stuff
- **Derived From:** `ft_strlen` is likely a reimplementation or a variation of the standard C library function `strlen`, which is found in the `string.h` header file.
- **Similar Functions:** The standard C library also provides functions like `wcslen` (for wide-character strings) and `strnlen_s` (a more secure version that takes a maximum length).
- **Libraries:** This `ft_strlen` function is most likely part of a custom C library (e.g., "libft"). The "ft_" prefix is often used to differentiate custom library functions from the standard library ones.
- **Commonly Used With:**
    - String manipulation functions like `ft_strcpy`, `ft_strcat`, `ft_strncat`, etc.
    - Memory allocation functions like `ft_strdup` (often used to create a duplicate of a string).
    - Input validation to check if a user-entered string exceeds a certain length.
    - Formatting strings for output (e.g., calculating buffer sizes).

**Key Improvements and Considerations (compared to strlen):**

- **Portability:** `ft_strlen` aims to replicate the behavior of `strlen`, but depending on the implementation, it might have slight differences that can impact portability across different platforms or compilers.
- **Security:** Pay attention to potential buffer overflow vulnerabilities in the code that calls `ft_strlen`. Ensure that you're using it safely with appropriate length checks, especially when dealing with user input.

**Important Notes:**

- **Null Termination:** `ft_strlen` relies on the presence of the null terminator ('\0') at the end of the string. If you pass a non-null-terminated array of characters to the function, it could lead to undefined behavior.
- **Efficiency:** The provided implementation is simple and clear. In performance-critical situations, there might be more optimized algorithms to calculate string length.

Let me know if you'd like a more detailed discussion on any of these aspects!


# ft_strlen - `size_t ft_strlen(const char *str);`

**Brief:**  
Calculates the length of the string pointed to by `str`, excluding the terminating null byte (`'\0'`).

**File:** `ft_strlen.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**
- `string.h`


**Description:**  
This function iterates through the characters of the string `str`, incrementing a counter until it encounters the null terminator (`'\0'`). The final value of the counter represents the length of the string (the number of characters before the null terminator).

**Input Values:**
* `str`: A pointer to the null-terminated byte string to be measured.

**Return Value:**
* The number of bytes in the string pointed to by `str`.

**Note:**
- The function does not include the terminating null byte in the length calculation.
- If `str` is `NULL`, the behavior is undefined. Ensure that the pointer is valid before calling the function.

**Example:**
```c
char *str = "Hello, world!";
size_t length = ft_strlen(str); // length will be 13
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

```