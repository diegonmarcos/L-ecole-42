# [ft_atoi](ft_atoi.c)
``` c 
int ft_atoi(const char *str);
```
<br>
<br>

# Manual
**Brief:**
Converts the initial portion of the string pointed to by `str` to an `int` representation.

**File:** `ft_atoi.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:** 
* `stdlib.h  pen_spark  ` 

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

<br>
<br>

# Code Explanation
**Source Code:**
``` C
#include "libft.h"

/**
 * @file ft_atoi.c
 * @author Your Name <your.email@example.com>
 * @date 2024-07-23 
 * @brief Converts the initial portion of the string pointed to by ptr to an int.
 *
 * This function mimics the behavior of the standard C library function `atoi()`.
 * It parses the input string `ptr`, interpreting its initial numeric characters
 * into an integer value.
 *
 * @param ptr The string to be converted.
 * @return int The converted integer value. If no valid conversion can be performed,
 *             zero is returned.
 * @note This function does not handle overflow or underflow. Undefined behavior
 *       may occur if the converted value exceeds the representable range of int.
 */
int ft_atoi(const char *ptr)
{
    int i;       // Index for traversing the string.
    int neg;     // Sign flag (1 for positive, -1 for negative).
    int result;  // Accumulator for the integer result.

    i = 0;       // Start at the beginning of the string.
    neg = 1;     // Assume positive by default.
    result = 0;  // Initialize the result to 0.

    // Skip leading whitespace characters (spaces, tabs, newlines).
    while (ptr[i] == ' ' || (ptr[i] >= 9 && ptr[i] <= 13)) 
        i++;

    // Check for optional '+' or '-' sign.
    if (ptr[i] == '+' || ptr[i] == '-')
    {
        if (ptr[i] == '-') 
            neg = -1;   // Update the sign flag if negative.
        i++;          // Move past the sign character.
    }

    // Convert digits to integer.
    while (ptr[i] != '\0' && ptr[i] >= '0' && ptr[i] <= '9')  // Check for end of string or non-digit character
    {
        result = (result * 10) + (ptr[i] - '0'); // Multiply the current result by 10 and add the numeric value of the current digit.
        i++;
    }

    return (result * neg);  // Apply the sign and return the final integer value.
}



```

