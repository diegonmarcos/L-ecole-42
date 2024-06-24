Hello World!

# 42_Reloaded


**Table 1: Organized by Exercise Number**

| Exercise | Title                                       |
|---|---|
| 00       | Oh yeah, mooore...                          |
| 01       | Z                                          |
| 02       | clean                                       |
| 03       | find_sh                                    |
| 04       | MAC                                        |
| 05       | Can you create it ?                          |
| 06       | ft_print_alphabet                           |
| 07       | ft_print_numbers                            |
| 08       | ft_is_negative                              |
| 09       | ft_ft                                      |
| 10       | ft_swap                                     |
| 11       | ft_div_mod                                  |
| 12       | ft_iterative_factorial                       |
| 13       | ft_recursive_factorial                      |
| 14       | ft_sqrt                                     |
| 15       | ft_putstr                                   |
| 16       | ft_strlen                                   |
| 17       | ft_strcmp                                   |
| 18       | ft_print_params                             |
| 19       | ft_sort_params                              |
| 20       | ft_strdup                                  |
| 21       | ft_range                                    |
| 22       | ft_abs.h                                    |
| 23       | ft_point.h                                   |
| 24       | Makefile                                     |
| 25       | ft_foreach                                  |
| 26       | ft_count_if                                 |
| 27       | display_file                                |

**Table 2: Organized by Header/Function Name**

| Standard C Header | Functions from "libft.h" (Likely Replicating or Extending) |
|-------------------|-------------------------------------------------------------|
| `<stdio.h>`        | ft_print_alphabet, ft_print_numbers, ft_putstr             |
| `<string.h>`       | ft_strlen, ft_strcmp, ft_strdup                           |
| `<stdlib.h>`      | ft_atoi (implied), ft_div_mod, ft_range, ft_foreach, ft_count_if |
| `<ctype.h>`       | ft_is_negative (possibly), ft_isdigit (implied), ft_isalpha (implied)  |
| `<math.h>`        | ft_sqrt                                                  |
| (None)            | ft_ft, ft_swap, ft_iterative_factorial, ft_recursive_factorial |

  
---  

---  
  

| Standard C Header | Functions from "libft.h" | Macro/Function Definition      | @brief                                                           |
|:-------------------|:------------------------|:-------------------------------|:----------------------------------------------------------------|
| `<stdio.h>`        | ft_print_alphabet        | (custom implementation)        | Prints the alphabet in lowercase.                                |
|                     | ft_print_numbers         | (custom implementation)        | Prints the decimal digits (0-9).                                 |
|                     | ft_putstr               | `void ft_putstr(char *str)`  | Outputs a string to the standard output.                          |
| `<string.h>`       | ft_strlen                | `size_t ft_strlen(const char *s)` | Calculates the length of a string.                                |
|                     | ft_strcmp                | `int ft_strcmp(const char *s1, const char *s2)` | Compares two strings lexicographically.                           |
|                     | ft_strdup               | `char *ft_strdup(const char *s1)` | Creates a duplicate of a string.                                 |
| `<stdlib.h>`      | ft_atoi                 | `int ft_atoi(const char *str)` | Converts a string to an integer.                                  |
|                     | ft_div_mod               | (custom implementation)        | Calculates the quotient and remainder of integer division.       |
|                     | ft_range                 | (custom implementation)        | Creates an array of integers within a specified range.            |
|                     | ft_foreach               | (custom implementation)        | Applies a function to each element of an array.                   |
|                     | ft_count_if              | (custom implementation)        | Counts elements in an array that satisfy a given condition.       |
| `<ctype.h>`       | ft_is_negative           | (custom implementation)        | Checks if a character represents a negative number.              |
|                     | ft_isdigit (implied)     | `int ft_isdigit(int c)`         | Checks if a character is a decimal digit.                         |
|                     | ft_isalpha (implied)     | `int ft_isalpha(int c)`         | Checks if a character is an alphabetic character.                 |
| `<math.h>`        | ft_sqrt                 | (custom implementation)        | Calculates the square root of an integer.                         |
| (None)            | ft_ft                   | (custom implementation)        | (Purpose unclear from the given context)                         |
|                     | ft_swap                  | `void ft_swap(int *a, int *b)`  | Swaps the values of two variables.                                |
|                     | ft_iterative_factorial   | (custom implementation)        | Calculates the factorial of a number iteratively.                |
|                     | ft_recursive_factorial  | (custom implementation)        | Calculates the factorial of a number recursively.               |
