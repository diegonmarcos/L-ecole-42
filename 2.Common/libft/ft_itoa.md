# ft_itoa - `char *ft_itoa(int n);`

**Brief:**
Converts an integer to a string representation.

**File:** `ft_itoa.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**
- `stdlib.h`, `string.h`

**Description:**  
This function converts an integer `n` into its corresponding string representation. It handles both positive and negative numbers. The resulting string is dynamically allocated using `malloc` and must be freed by the user when no longer needed.

**Input Values:**  
* `n`: The integer to be converted.

**Return Value:**  
* A string representing the integer `n`. 
* NULL if memory allocation fails.

**Note:**  
- The function handles the special case of `INT_MIN` (the minimum representable integer value).
- Ensure proper memory management by freeing the returned string when it's no longer required.

**Example:**  
```c
char *str = ft_itoa(-12345);
printf("%s\n", str); // Output: -12345
free(str);
