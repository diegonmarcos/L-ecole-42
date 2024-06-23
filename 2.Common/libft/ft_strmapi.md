# ft_strmapi - `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`

**Brief:**  
Creates a new string resulting from applying a function `f` to each character of a string `s`.

**File:** `ft_strmapi.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



**Description:**
The `ft_strmapi()` function applies the function `f` to each character of the string `s` to create a new string (with malloc(3)). The function `f` receives the index of the current character as its first argument and the character itself as its second argument. The result of `f` is then used as the character at that index in the new string.

**Input Values:**
* `s`: The string to be mapped.
* `f`: The function to apply to each character of `s` and its index.

**Return Value:**
* The string created from the successive applications of `f`. 
* Returns `NULL` if the allocation fails.

**Note:**
- The caller is responsible for freeing the memory allocated for the new string using `free()` when it is no longer needed.
- The index of the character is passed as the first argument to the function `f`, and the character itself is passed as the second argument.
- If `s` is NULL or if the allocation fails, the function returns `NULL`.

**Example:**
```c
char my_func(unsigned int i, char c) {
    if (i % 2 == 0) 
        return ft_toupper(c);
    else
        return ft_tolower(c);
}

char str[] = "Hello, world!";
char *new_str = ft_strmapi(str, &my_func);

// new_str might contain "HeLlO, WoRlD!"
free(new_str); // Free the allocated string.
