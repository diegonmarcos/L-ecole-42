# ft_split - `char **ft_split(char const *s, char c);`

**Brief:**
Splits a string into an array of strings based on a delimiter character.

**File:** `ft_split.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**



**Description:**  
This function takes a string `s` and a delimiter character `c`, and splits the string into an array of substrings (words) based on the delimiter. The resulting array of strings is dynamically allocated and ends with a NULL pointer.

**Input Values:**
* `s`: The string to be split.
* `c`: The delimiter character used to split the string.

**Return Value:**
* An array of strings representing the split substrings.
* NULL if the allocation fails.

**Note:**
- The returned array of strings must be freed by the user when it is no longer needed.
- Each individual string in the returned array must also be freed by the user.
- Empty strings resulting from consecutive delimiters are not included in the returned array.

**Example:**
```c
char str[] = "This is a sample string to split";
char **result = ft_split(str, ' ');

// result now contains:
// result[0] = "This"
// result[1] = "is"
// result[2] = "a"
// result[3] = "sample"
// result[4] = "string"
// result[5] = "to"
// result[6] = "split"
// result[7] = NULL

// Freeing the allocated memory
for (int i = 0; result[i]; i++) {
    free(result[i]);
}
free(result);
