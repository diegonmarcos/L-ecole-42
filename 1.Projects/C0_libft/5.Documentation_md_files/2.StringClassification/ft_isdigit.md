# ft_isdigit 
``` c 
int ft_isdigit(int c);
```
<br>
<br>

# Manual
**Brief:**
Checks if a character is a decimal digit (0 through 9).

**File:** `ft_isdigit.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**
- `ctype.h`


**Description:**  
This function checks whether a character is a numeric character (0 through 9).

**Input Values:**  
* `c`: The character (integer value) to be checked.

**Return Value:**  
* Non-zero value if `c` is a digit.
* Zero if `c` is not a digit.

**Note:**  
-  The function will evaluate characters regardless of their locale.

**Implementation:**  
```c
if (ft_isdigit('8')) {
    printf("This is a digit.\n");
} else {
    printf("This is not a digit.\n");
}
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
```
