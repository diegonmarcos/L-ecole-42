# ft_toupper 
``` c 
int ft_toupper(int c);
```
<br>
<br>

# Manual
**Brief:**  
Converts a lowercase letter to its uppercase equivalent.

**File:** `ft_toupper.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
* `ctype.h`

**Description:**  
This function converts a lowercase letter to its uppercase equivalent. If the argument is an uppercase letter or not a letter, it is returned unchanged.

**Input Values:**  
* `c`: The character to be converted to uppercase.

**Return Value:**  
* If `c` is a lowercase letter, it returns the corresponding uppercase letter.
* Otherwise, it returns the argument unchanged.

**Note:**  
- The behavior of this function is dependent on the current locale for non-ASCII characters.
- In the default "C" locale, this function will only convert lowercase letters from the standard English alphabet (a-z) to their uppercase equivalents.

**Example:**  
```c
char c = 'a';
char uppercase_c = ft_toupper(c); // uppercase_c will be 'A'

char d = 'D';
char unchanged_d = ft_toupper(d); // unchanged_d will still be 'D'
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

```