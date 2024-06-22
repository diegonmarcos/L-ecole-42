# ft_tolower - **Synopsis:** - `int ft_tolower(int c);`

**Brief:**  
Converts an uppercase letter to its lowercase equivalent.

**File:** `ft_tolower.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**  
* Standard C Library

**Description:**  
This function converts an uppercase letter to its lowercase equivalent. If the argument is a lowercase letter or already lowercase, the argument is returned unchanged.

**Input Values:**  
* `c`: The character to be converted to lowercase.

**Return Value:**  
* If `c` is an uppercase letter, returns the corresponding lowercase letter.
* Otherwise, returns the argument unchanged.

**Note:**  
-  The behavior of this function is dependent on the current locale for non-ASCII characters.
- In the default "C" locale, this function will only convert uppercase letters from the standard English alphabet (A-Z) to their lowercase equivalents.

**Example:**  
```c
char c = 'A';
char lowercase_c = ft_tolower(c); // lowercase_c will be 'a'

char d = 'd';
char unchanged_d = ft_tolower(d); // unchanged_d will still be 'd'
