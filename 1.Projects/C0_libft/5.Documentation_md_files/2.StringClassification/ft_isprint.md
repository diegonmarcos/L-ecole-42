# ft_isprint 
``` c 
int ft_isprint(int c);
```
<br>
<br>

# Manual
**Brief:**
Checks if a character is printable.

**File:** `ft_isprint.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**
- `ctype.h`

**Description:**  
This function tests whether a character is a printable character (i.e., both visible and not a space).

**Input Values:**  
* `c`: The character (integer value) to be checked.

**Return Value:**  
* Non-zero value if `c` is a printable character (space character inclusive).
* Zero if `c` is not a printable character.

**Note:**
- In the ASCII character set, this includes the following characters (decimal values):
    - 32 - 126 (0x20 - 0x7E)

**Example:**  
```c
if (ft_isprint('A')) {
    printf("This is a printable character.\n");
} else {
    printf("This is not a printable character.\n");
}
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}

```