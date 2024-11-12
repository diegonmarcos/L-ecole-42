# ft_isalnum 
``` c 
int ft_isalnum(int c);
```
<br>
<br>

# Manual
**Brief:**
Checks if a character is alphanumeric (either alphabetic or numeric).

**File:** `ft_isalnum.c` / **Date:** 2024-06-22 / 
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>  

**Library/Header:**
* ctype.h

**Description:**
The `ft_isalnum()` function checks if the character passed as an argument (`c`) is alphanumeric, meaning it is either an alphabetic character (A-Z, a-z) or a numeric digit (0-9). It internally uses the `ft_isalpha()` and `ft_isdigit()` functions from the libft library to perform this check.

**Input Values:**
* `c`: The character to be checked, represented as an integer.

**Return Value:**
* Non-zero value if `c` is an alphanumeric character (either alphabetic or numeric).
* Zero if `c` is not an alphanumeric character.

**Note:**
- The input character `c` is implicitly converted to an `unsigned char` before the check is performed.
- This function is a part of the libft library, a custom library of utility functions for C programming.

**Implementation:**
```c
if (ft_isalnum('A')) {
    printf("This is an alphanumeric character.\n");
} else {
    printf("This is not an alphanumeric character.\n");
}
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) || ft_isdigit(c)))
		return (c);
	return (0);
}
```