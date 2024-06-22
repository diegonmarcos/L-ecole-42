# ft_isascii - **Synopsis:** - `int ft_isascii(int c);`

**Brief:**
Checks if a character is a 7-bit ASCII character (0 - 127).

**File:** `ft_isascii.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



**Description:**  
This function determines if a character value falls within the 7-bit ASCII range (0 - 127).  It returns a non-zero value if the character is within this range, and zero if it is not.

**Input Values:**  
* `c`: The character (integer value) to be checked.

**Return Value:**  
* Non-zero value if `c` is a 7-bit ASCII character (0 - 127).
* Zero if `c` is not a 7-bit ASCII character.

**Note:**  
-  The function will evaluate characters regardless of their locale. 

**Example:**  
```c
if (ft_isascii('A')) {
    printf("This is a 7-bit ASCII character.\n");
} else {
    printf("This is not a 7-bit ASCII character.\n");
}
```