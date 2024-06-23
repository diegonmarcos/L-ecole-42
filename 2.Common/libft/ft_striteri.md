# ft_striteri - `void ft_striteri(char *s, void (*f)(unsigned int, char *));`

**Brief:**
Applies the function `f` to each character of the string `s`, and passing its index as first argument.

**File:** `ft_striteri.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**
* libft

**Description:**
The `ft_striteri()` function iterates over each character of the string `s`, passing the current index and a pointer to the character to the function `f`. If the input string `s` and the function pointer `f` are not NULL, the iteration begins. Inside the loop, the function `f` is applied to each character, allowing it to modify the character if necessary. The index is incremented with each iteration, and the loop continues until the null terminator of the string is reached.

**Input Values:**
* `s`: The string on which to iterate.
* `f`: The function to apply to each character of `s` and its index.

**Return Value:**
* None.

**Note:**
- The function modifies the string `s` directly through the function `f`.
- Ensure that the function `f` handles the character pointer correctly and does not cause any memory errors.

**Example:**
```c
// Function to convert each character to uppercase
void to_uppercase(unsigned int i, char *c) {
    (void)i; // Unused index parameter
    *c = ft_toupper(*c); 
}

char str[] = "hello world";
ft_striteri(str, to_uppercase); // str is modified to "HELLO WORLD"
