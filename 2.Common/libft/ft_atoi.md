# ft_atoi -  - `int ft_atoi(const char *str);`

**Brief:**
Converts the initial portion of the string pointed to by `str` to an `int` representation.

**File:** `ft_atoi.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**  
* Standard C Library  

**Description:**  
This function converts the initial portion of the string pointed to by `str` to an integer representation. It works by skipping any leading whitespace characters (spaces, tabs, newlines), then processing an optional sign character ('+' or '-'), and finally interpreting a sequence of digits as a decimal integer.

**Input Values:**  
* `str`: Pointer to the string to be converted.  

**Return Value:**  
* The converted integer value. If no valid conversion can be performed, it returns zero.

**Note:**  
- The behavior is undefined if the converted value cannot be represented by an `int`.
- The function does not detect overflow or underflow.
- It stops processing the string when it encounters a non-digit character.

**Example:**  
```c
int num = ft_atoi("   -42");  // num will be -42
int num2 = ft_atoi("123abc"); // num2 will be 123
```

