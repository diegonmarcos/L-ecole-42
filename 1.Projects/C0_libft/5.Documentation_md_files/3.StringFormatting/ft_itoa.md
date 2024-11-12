# ft_itoa
``` c 
char *ft_itoa(int n);
```
<br>
<br>

# Manual
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
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
#include "libft.h" // Include the libft header file for necessary functions and types.
#include <stdlib.h> // Include stdlib.h for malloc() and free() functions.

// Helper function to count the number of digits in an integer.
static int ft_digit_count(long int i)  
{
    int count = 0;      // Initialize a digit counter.

    if (i <= 0)          // Handle negative numbers and zero:
    {
        i *= -1;          // Convert negative numbers to positive.
        count++;        // Add one digit for the '-' sign.
    }
    while (i > 0)        // Iterate until there are no more digits left:
    {
        i /= 10;        // Remove the last digit by integer division.
        count++;        // Increment the digit count.
    }
    return (count);   // Return the total number of digits.
}

// Helper function to handle negative numbers and place the '-' sign in the string.
long int comp(long int nb, char *str) 
{
    if (nb < 0) 
    {
        str[0] = '-';    // Place '-' at the beginning of the string.
        nb = nb * -1;    // Make nb positive for further calculations.
    }
    return (nb);      // Return the positive value of nb.
}

// Main function to convert an integer to a string.
char *ft_itoa(int n) 
{
    char *str;           // Declare a character pointer to hold the result string.
    int i;                // Index variable for string manipulation.
    long int nb;         // Use 'long int' to handle INT_MIN (-2147483648).

    nb = n;                // Cast 'n' to 'long int' to avoid potential overflow issues.
    i = ft_digit_count(nb); // Get the number of digits needed for the string.
    str = (char *)ft_calloc((i + 1), sizeof(char)); // Allocate memory for the string (including null terminator).
    if (!str)           // Check if memory allocation failed.
        return (NULL);  // Return NULL if allocation failed.
    str[i--] = '\0';     // Add null terminator to the end of the string.

    if (nb == 0)          // Special case for zero
    {
        str[0] = '0';    // If the number is zero, the string is simply "0".
        return (str);    // Return the string.
    }
    
    nb = comp(nb, str); // Handle negative numbers and place the '-' sign.
    
    while (nb > 0)      // Loop to convert each digit to character and store it in the string.
    {
        str[i--] = nb % 10 + '0'; // Get the last digit, convert to char, and place it at the end.
        nb = nb / 10;           // Remove the last digit.
    }
    return (str);         // Return the resulting string.
}


```