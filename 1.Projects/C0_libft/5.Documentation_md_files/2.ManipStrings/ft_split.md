# ft_split - `char **ft_split(char const *s, char c);`
<br>
<br>

# Manual
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

**Implementation:**
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
```

<br>
<br>

# Code Explanation

**Brief Description:**

The code defines two static helper functions (`ft_count` and `ft_free`) and the main function `ft_split`.

- `ft_count`: Counts the number of words (substrings) in the input string that are separated by the delimiter character.
- `ft_free`: Frees the memory allocated for an array of strings if an error occurs during the splitting process.
- `ft_split`: Splits the input string into an array of substrings (words) based on the given delimiter, handling memory allocation and potential errors.

**Detailed Explanation:**

```c
static int ft_count(char const *s, char c) // static makes the function only usable in this file
{
    int counter;        // Initialize a counter to track the number of words.
    int i;             // Index to iterate through the string.

    counter = 0;
    i = 0;
    while (s[i])        // Loop through the string as long as it's not the end ('\0').
    {
        if (s[i] != c)    // If the current character is not the delimiter:
        {
            counter++;      // Increment the word counter.
        }
        while (s[i] && s[i] != c) //Skip the characters that belong to the same word
        {   
            i++;             // Move to the next character.
            if (s[i] == '\0') // If end of string is reached before finding a delimiter:
                return (counter); // Return the number of words found so far.
        }
        i++;             // Move to the next character after the delimiter.
    }
    return (counter);  // Return the total count of words.
}
```
```c
static void ft_free(char **farray, int failed) // static makes the function only usable in this file
{
    while (failed > 0)  // Loop through the allocated strings up to the failed index.
    {
        free(farray[failed - 1]); // Free the memory of each string in reverse order.
        failed--;
    }
    free(farray);      // Free the array of strings itself.
}
```

```c
char    **ft_split(char const *s, char c)
{
    char    **array;        // Array to store the split strings.
    int     num_words;      // Total number of words in the string.
    int     i;             // Index for iterating through the original string.
    int     j;             // Index for marking the start of each word.

    num_words = ft_count(s, c); // Count the number of words using the helper function.
    array = (char **)ft_calloc(num_words + 1, sizeof(char *)); 
    if (!array)             // Allocate memory for the array, including space for the NULL terminator.
        return (NULL);      // If allocation fails, return NULL.

    i = 0;
    j = 0;
    num_words = 0;         // Reset the word counter for use in the main loop.
    while (num_words < ft_count(s, c)) // Loop through the string until all words are processed.
    {
        while (s[i] && s[i] == c) // Skip leading delimiters.
            i++;
        j = i;                // Mark the start of the next word.
        while (s[i] && s[i] != c) // Find the end of the word (delimiter or end of string).
            i++;

        array[num_words] = ft_substr(s, j, i - j); // Create a substring for the word.
        if (!array[num_words++]) 
            return (ft_free(array, num_words), NULL); // Free memory and return NULL on allocation failure.
    }
    array[num_words] = NULL;  // Add the NULL terminator to the end of the array.
    return (array);        // Return the array of split strings.
}
```