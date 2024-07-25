

<a id="top"></a>


> ## 42 Common Core Curriculum / Circle 0 /# Libft
---
<p align="center">
	• <a href="#project-description">Project Description</a> •
	<a href="#objectives-and-deliverables">Objectives/Deliverables</a> •
	<a href="#Resources">Resources</a> •
	<a href="#Release">Release</a> •

</p>

<br>

<br>

<br>

<br>

<br>

<br>

<h1 id="project-description">PROJECT DESCRIPTION</h1>

>The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42.

- [Subject](https://github.com/diegonmarcos/L-ecole-42/tree/main/2.Common/C0_libft/en.subject.pdf) `PDF`

## Curricullum

This project is about coding a C library.

#### Functions:
- Character Classification
- String Operations  
- String Manipulation  
- Memory Manipulation   
- Conversions  
- I/O File Descriptors  
- Linked List Operations
#### Others
- Makefile  

<br>

[Back to Top](#top)
<br>
<br>
<br>
<br>
<br>
<br>

<h1 id="objectives-and-deliverables">OBJECTIVES AND DELIVERABLES</h1>

> The mandatory functions in libft include both functions from the standard C library and other functions that are useful for character, string, and memory manipulation. These **34 mandatory functions** are essential to achieving a **grade of 100**.
<br>

<br>

## Mandatory 

**Manipulate Characters (`ctype.h`)**

Function | Description | Difficulty
---|---|---
`ft_isalpha` | Alphabetic character test. | 
`ft_isdigit` | Decimal-digit character test. | 
`ft_isalnum` | Alphanumeric character test. | 
`ft_isascii` | Test for ASCII character. | 
`ft_toupper` | Lower case to upper case letter conversion. | 
`ft_tolower` | Upper case to lower case letter conversion. | 

**Manipulate Strings (`string.h`)**

Function | Description | Difficulty
---|---|---
`ft_strlen` | Find the length of the string. | 
`ft_strlcpy` | Size-bounded string copying. | ##
`ft_strlcat` | Size-bounded string concatenation. | ##
`ft_strchr` | Locate the character in the string (first occurrence). | 
`ft_strrchr` | Locate the character in the string (last occurrence). | 
`ft_strncmp` | Compare strings (size-bounded). | ##
`ft_strnstr` | Locate a substring in a string (size-bounded) | ##
`ft_substr` | Extract substring from a string. | ##
`ft_strjoin` | Concatenate two strings into a new string (with malloc). | ##
`ft_strtrim` | Trim the beginning and end of the string with the specified characters. | ##
`ft_split` | Split string, with specified character as delimiter, into an array of strings. | **###**
`ft_strmapi` | Create a new string by modifying the string with a specified function. | ##
`ft_striteri` | Iterates through a string, enabling character and index manipulation. | ##

**Manipulate Memory (`string.h`, `stdlib.h`)**

Function | Description | Difficulty
---|---|---
`ft_calloc` | Memory allocation. | ##
`ft_memset` | Write a byte to a byte string. | 
`ft_bzero` | Write zeroes to a byte string. | 
`ft_memcpy` | Copy memory area. | ##
`ft_memmove` | Copy byte string. | ##
`ft_memchr` | Locate byte in byte string. | ##
`ft_memcmp` | Compare byte string. | ##
`ft_strdup` | Save a copy of a string (with malloc). | ##

**Manipulate Numbers/Conversions(`stdlib.h`)**

Function | Description | Difficulty
---|---|---
`ft_atoi` | Convert the ASCII string to an integer. | ##
`ft_itoa` | Convert integer to ASCII string. | **###**

**I/O File Descriptors (`unistd.h`)**

Function | Description | Difficulty
---|---|---
`ft_putchar_fd` | Output a character to the given file. | 
`ft_putstr_fd` | Output string to the given file. | 
`ft_putendl_fd` | Output string to given file with newline. | 
`ft_putnbr_fd` | Output integer to the given file. | ##


<br>


## Bonus
#### List Manipulators:

| Function | Description |
| :- | :- |
| `ft_lstnew`       | Create new list. |
| `ft_lstadd_front` | Add a new element at the beginning of the list. |
| `ft_lstadd_back`  | Add a new element at the end of the list. |
| `ft_lstsize`      | Count elements of a list. |
| `ft_lstlast`      | Find the last element of the list. |
| `ft_lstdelone`    | Delete element from the list. |
| `ft_lstclear`     | Delete the sequence of elements of the list from a starting point. |
| `ft_lstiter`      | Apply function to the content of all list elements. |
| `ft_lstmap`       | Apply function to the content of all list elements into a new list. |

<br>
Absolutely! Here is your list of libft functions, organized alphabetically with their descriptions, and without the original section titles:

* `ft_atoi`: Convert the ASCII string to an integer. 
* `ft_bzero`: Write zeroes to a byte string.
* `ft_calloc`: Memory allocation.
* `ft_isalnum`: Alphanumeric character test.
* `ft_isalpha`: Alphabetic character test.
* `ft_isascii`: Test for ASCII character.
* `ft_isdigit`: Decimal-digit character test.
* `ft_isprint`: Test for printable character.
* `ft_itoa`: Convert integer to ASCII string.
* `ft_memchr`: Locate byte in byte string.
* `ft_memcmp`: Compare byte string.
* `ft_memcpy`: Copy memory area.
* `ft_memmove`: Copy byte string.
* `ft_memset`: Write a byte to a byte string.
* `ft_putchar_fd`: Output a character to the given file.
* `ft_putendl_fd`: Output string to given file with newline.
* `ft_putnbr_fd`: Output integer to the given file.
* `ft_putstr_fd`: Output string to the given file.
* `ft_split`: Split string, with specified character as delimiter, into an array of strings.
* `ft_strchr`: Locate the character in the string (first occurrence).
* `ft_strdup`: Save a copy of a string (with malloc).
* `ft_striteri`: Iterates through a string, enabling character and index manipulation.
* `ft_strjoin`: Concatenate two strings into a new string (with malloc).
* `ft_strlcat`: Size-bounded string concatenation.
* `ft_strlcpy`: Size-bounded string copying.
* `ft_strlen`: Find the length of the string.
* `ft_strmapi`: Create a new string by modifying the string with a specified function.
* `ft_strncmp`: Compare strings (size-bounded).
* `ft_strnstr`: Locate a substring in a string (size-bounded)
* `ft_strrchr`: Locate the character in the string (last occurrence).
* `ft_strtrim`: Trim the beginning and end of the string with the specified characters.
* `ft_substr`: Extract substring from a string.
* `ft_tolower`: Upper case to lower case letter conversion.
* `ft_toupper`: Lower case to upper case letter conversion.

Let me know if you'd like any modifications to this list or want to explore specific functions in more detail!

[Back to Top](#top)

<br>
<br>
<br>
<br>
<br>
<br>

# **RESOURCES**

- [References](https://github.com/jotavare/42-resources#00-libft) `GitHub`
- [Eval and Exams](https://github.com/diegonmarcos/L-ecole-42/tree/main/2.Common/C0_libft/eval_exam.md) `Eval`  



Resource                                                                                 | Source    |
| :--------------------------------------------------------------------------------------- | :-------- |
| [Libft - C Standard Library Rewrite](https://www.asidesigned.com/project-libft.html)     | `Website` |
| [Easy Makefile](https://pulgamecanica.herokuapp.com/posts/makefiles)                     | `Website` |
| [Master Memory Management](https://medium.com/p/b86fedd39b96)                            | `Medium`  |
| [Make-A-Make: Clear the fog around Makefiles](https://github.com/Nuno-Jesus/Make-A-Make) | `GitHub`  |

| Project                                                                                  | Source    | User |
| :--------------------------------------------------------------------------------------- | :-------- | :--- |
| [42's libft with comments](https://github.com/pbie42/libft42commented)                   | `GitHub`  | `pbie42` |

| Tester                                                                 | Source    | User |
| :--------------------------------------------------------------------- | :-------- | :--- |
| [francinette](https://github.com/xicodomingues/francinette)            | `GitHub`  | `xicodomingues` |
| [libftTester](https://github.com/Tripouille/libftTester)               | `GitHub`  | `Tripouille` |
| [libft_file_checker](https://github.com/Nuno-Jesus/libft_file_checker) | `GitHub`  | `Nuno-Jesus` |
| [libft-unit-test](https://github.com/alelievr/libft-unit-test)         | `GitHub`  | `alelievr` |
| [Libftest](https://github.com/jtoty/Libftest)                          | `GitHub`  | `jtoty` |
| [libft-war-machine](https://github.com/0x050f/libft-war-machine)       | `GitHub`  | `0x050f` |

<br>

[Back to Top](#top)

<br>
<br>
<br>
<br>
<br>
<br>

# RELEASE

## Source Code

## Documentation (Manual and Explanation)

## File Structure
```
libft/  
├── Makefile  
├── docs/html/index.html              // Documentation Doxygen  
├── libftTester-master    // Tester  
├── libft.h              // Header file with function prototypes  
├── ...  
├── ft_isalpha.c        // C files  
├── ft_isdigit.c  
├── ft_isalnum.c  
├── ...  
├── ft_isalpha.md        // Documentation - markdown files  
├── ft_isdigit.md   
├── ft_isalnum.md  
├── ...                // All other ft_*.c files    
└── README.md         // Project description and instructions  
```

<br>

[Back to Top](#top)

<br>


Strlen  
Memset  
<br>
Strchr  
<br>
Atoi  
Strdup  
Calloc  
Strncmp  
<br>
Substr  
Strjoin   
<br>
Split  
<br>



