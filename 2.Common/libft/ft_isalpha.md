# ft_isalpha - `int ft_isalpha(int c);`

**Brief:**
Checks if a character is alphabetic.

**File:** `ft_isalpha.c` / **Date:** 2024-06-22
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**
* libft

**Description:**
The `ft_isalpha()` function checks whether the passed character `c` is an alphabetic character as classified by the current locale. In the standard "C" locale, `ft_isalpha()` returns true only for the characters for which `isupper(3)` or `islower(3)` is true.  

**Input Values:**
* `c`: The character to be checked.

**Return Value:**
* Non-zero value if `c` is an alphabetic character.
* Zero if `c` is not an alphabetic character.

**Note:**
- The input character `c` is implicitly converted to an `unsigned char` before the check is performed.
- The behavior of this function is dependent on the current locale for non-ASCII characters.
- In the default "C" locale, this function will only recognize characters from the standard English alphabet (A-Z and a-z).

**Example:**
```c
if (ft_isalpha('A')) {
    printf("This is an alphabetic character.\n");
} else {
    printf("This is not an alphabetic character.\n");
}
```
