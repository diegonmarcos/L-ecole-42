### 42 Common Core Curriculum: Circle 0  - Libft  
---
<p align="center">
	<a href="#About">About</a> •
	<a href="#Mandatory">Mandatory Objects</a> •
	<a href="#Bonus">Bonus</a> •
	<a href="#Resources">Resources</a> •
	<a href="#File Structure">File Structure</a> •
</p>

# ABOUT
The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42.

- [Subject](https://github.com/diegonmarcos/L-ecole-42/tree/main/2.Common/C0_libft/en.subject.pdf) `PDF`
- [References](https://github.com/jotavare/42-resources#00-libft) `GitHub`
- [Eval and Exams](https://github.com/diegonmarcos/L-ecole-42/tree/main/2.Common/C0_libft/eval_exam.md) `Eval`


# MANDATORY
> The mandatory functions in libft include both functions from the standard C library and other functions that are useful for character, string, and memory manipulation. These **34 mandatory functions** are essential to achieving a **grade of 100**.

#### Check and manipulate characters:
| Function | Description |
| :- | :- |
| `ft_isalpha` | Alphabetic character test. |
| `ft_isdigit` | Decimal-digit character test. |
| `ft_isalnum` | Alphanumeric character test. |
| `ft_isascii` | Test for ASCII character. |
| `ft_toupper` | Lower case to upper case letter conversion. |
| `ft_tolower` | Upper case to lower case letter conversion. |

#### Manipulate strings:
| Function | Description |
| :- | :- |
| `ft_strlen`   | Find the length of the string. |
| `ft_strlcpy`  | Size-bounded string copying. |
| `ft_strlcat`  | Size-bounded string concatenation. |
| `ft_strchr`   | Locate the character in the string (first occurrence). |
| `ft_strrchr`  | Locate the character in the string (last occurrence). |
| `ft_strncmp`  | Compare strings (size-bounded). |
| `ft_strnstr`  | Locate a substring in a string (size-bounded) |
| `ft_substr`   | Extract substring from a string. |
| `ft_strjoin`  | Concatenate two strings into a new string (with malloc). |
| `ft_strtrim`  | Trim the beginning and end of the string with the specified characters. |
| `ft_split`    | Split string, with specified character as delimiter, into an array of strings. |
| `ft_strmapi`  | Create a new string by modifying the string with a specified function. |
| `ft_striteri` | Iterates through a string, enabling character and index manipulation. |

#### Manipulate memory:
| Function | Description |
| :- | :- |
| `ft_calloc`  | Memory allocation. |
| `ft_memset`  | Write a byte to a byte string. |
| `ft_bzero`   | Write zeroes to a byte string. |
| `ft_memcpy`  | Copy memory area. |
| `ft_memmove` | Copy byte string. |
| `ft_memchr`  | Locate byte in byte string. |
| `ft_memcmp`  | Compare byte string. |
| `ft_strdup`  | Save a copy of a string (with malloc). |

#### Manipulate numbers:
| Function | Description |
| :- | :- |
| `ft_atoi` | Convert the ASCII string to an integer. |
| `ft_itoa` | Convert integer to ASCII string. |

#### Write to a file descriptor:
| Function | Description |
| :- | :- |
| `ft_putchar_fd` | Output a character to the given file. |
| `ft_putstr_fd`  | Output string to the given file. |
| `ft_putendl_fd` | Output string to given file with newline. |
| `ft_putnbr_fd`  | Output integer to the given file. |

# BONUS
#### List Manipulator:

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
---
---
---
---
<br>

# Curricullum

This project is about coding a C library.

## Functions:  
**Character Classification:**  
- ft_isalpha, ft_isdigit ft_isalnum ft_isascii ft_isprint  

**String Operations:**  
- ft_strlen ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_strdup  

**String Manipulation (Advanced):**  
- ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri  

**Memory Manipulation:**   
- ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_calloc

**Conversions**  
- ft_atoi  

**I/O File Descriptors**  
- ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd  

**Linked List Operations**  
- ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap  

## Others
- Makefile

<br>  
<br>

# **Resources**

| Resource                                                                                 | Source    |
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

----
# File Structure
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

---
---
---
<br>


# Functions
## Character & String Manipulation

- ### Character Classification (`ctype.h`)

| Function                    | Description                                 |
| :-------------------------- | :------------------------------------------ |
| [ft_isalnum](ft_isalnum.md) | Check if a character is alphanumeric.       |
| [ft_isalpha](ft_isalpha.md) | Check if a character is alphabetic.         |
| [ft_isascii](ft_isascii.md) | Check if a character is an ASCII character. |
| [ft_isdigit](ft_isdigit.md) | Check if a character is a digit.            |
| [ft_isprint](ft_isprint.md) | Check if a character is printable.          |
| [ft_tolower](ft_tolower.md) | Convert an uppercase letter to lowercase.   |
| [ft_toupper](ft_toupper.md) | Convert a lowercase letter to uppercase.    |

- ### String Operations (`string.h`)

|Function|Description|
|:--|:--|
|[ft_strlen](ft_strlen.md)|Calculate the length of a string.|
|[ft_strlcat](ft_strlcat.md)|Concatenate strings with length restrictions.|
|[ft_strchr](ft_strchr.md)|Locate first occurrence of character in string.|
|[ft_strrchr](ft_strrchr.md)|Locate last occurrence of character in string.|
|[ft_strncmp](ft_strncmp.md)|Compare two strings up to a certain number of characters.|
|[ft_strnstr](ft_strnstr.md)|Locate a substring within a string up to a certain number of characters.|
|[ft_strdup](ft_strdup.md)|Duplicate a string.|

- ### String Manipulation (Custom: `libft.h`)

| Function                                                    | Description                                                            |
| :---------------------------------------------------------- | :--------------------------------------------------------------------- |
| [ft_substr](ft_substr.md)     | Create a substring from a given string.                                |
| [ft_strjoin](ft_strjoin.md)   | Concatenate two strings.                                               |
| [ft_strtrim](ft_strtrim.md)   | Trim leading and trailing whitespace from a string.                    |
| [ft_split](ft_split.md)       | Split a string into an array of strings based on a delimiter.          |
| [ft_itoa](ft_itoa.md)         | Convert an integer to a string.                                        |
| [ft_strmapi](ft_strmapi.md)   | Apply a function to each character of a string to create a new string. |
| [ft_striteri](ft_striteri.md) | Apply a function to each character of a string.                        |

## Other Functions

- ### Memory Manipulation (`string.h`, `stdlib.h`)

|Function|Description|
|:--|:--|
|[ft_memset](ft_memset.md)|Fill block of memory with a byte.|
|[ft_bzero](ft_bzero.md)|Zero a byte string.|
|[ft_memcpy](ft_memcpy.md)|Copy block of memory.|
|[ft_memmove](ft_memmove.md)|Move block of memory.|
|[ft_memchr](ft_memchr.md)|Locate character in block of memory.|
|[ft_memcmp](ft_memcmp.md)|Compare two blocks of memory.|
|[ft_calloc](ft_calloc.md)|Allocate and zero-initialize array.|

- ### Conversions (`stdlib.h`)

|Function|Description|
|:--|:--|
|[ft_atoi](ft_atoi.md)|Convert a string to an integer.|

- ### I/O File Descriptors (`unistd.h`)

|Function|Description|
|:--|:--|
|[ft_putchar_fd](ft_putchar_fd.md)|Output a character to a file descriptor.|
|[ft_putstr_fd](ft_putstr_fd.md)|Output a string to a file descriptor.|
|[ft_putendl_fd](ft_putendl_fd.md)|Output a string to a file descriptor, followed by a newline.|
|[ft_putnbr_fd](ft_putnbr_fd.md)|Output an integer to a file descriptor.|

- ### Linked List Operations (Custom: `libft.h`)

| Function                              | Description                                                                        |
| :------------------------------------ | :--------------------------------------------------------------------------------- |
| [ft_lstnew](ft_lstnew.md)             | Create a new list element.                                                         |
| [ft_lstadd_front](ft_lstadd_front.md) | Add a new element at the beginning of a list.                                      |
| [ft_lstsize](ft_lstsize.md)           | Count the number of elements in a list.                                            |
| [ft_lstlast](ft_lstlast.md)           | Find the last element of a list.                                                   |
| [ft_lstadd_back](ft_lstadd_back.md)   | Add a new element at the end of a list.                                            |
| [ft_lstdelone](ft_lstdelone.md)       | Delete a list element.                                                             |
| [ft_lstclear](ft_lstclear.md)         | Delete all elements of a list.                                                     |
| [ft_lstiter](ft_lstiter.md)           | Apply a function to each element of a list.                                        |
| [ft_lstmap](ft_lstmap.md)             | Apply a function to each element of a list and create a new list from the results. |

---
# Functions (by header)
## Libft (custom)

| Function    | Description                                                            |
| :---------- | :--------------------------------------------------------------------- |
| ft_lst*     | Linked list manipulation functions.                                    |
| ft_split    | Split a string into an array of strings based on a delimiter.          |
| ft_striteri | Apply a function to each character of a string.                        |
| ft_strjoin  | Concatenate two strings.                                               |
| ft_strmapi  | Apply a function to each character of a string to create a new string. |
| ft_strtrim  | Trim leading and trailing whitespace from a string.                    |
| ft_substr   | Create a substring from a given string.                                |

## ctype.h

|Function|Description|
|:--|:--|
|ft_isalnum|Check if a character is alphanumeric.|
|ft_isalpha|Check if a character is alphabetic.|
|ft_isascii|Check if a character is an ASCII character.|
|ft_isdigit|Check if a character is a digit.|
|ft_isprint|Check if a character is printable.|
|ft_tolower|Convert an uppercase letter to lowercase.|
|ft_toupper|Convert a lowercase letter to uppercase.|

## stdlib.h

|Function|Description|
|:--|:--|
|ft_atoi|Convert a string to an integer.|
|ft_calloc|Allocate and zero-initialize array.|
|ft_itoa|Convert an integer to a string.|

## string.h

|Function|Description|
|:--|:--|
|ft_bzero|Zero a byte string.|
|ft_memchr|Locate character in block of memory.|
|ft_memcmp|Compare two blocks of memory.|
|ft_memcpy|Copy block of memory.|
|ft_memmove|Move block of memory.|
|ft_memset|Fill block of memory with a byte.|
|ft_strchr|Locate first occurrence of character in string.|
|ft_strdup|Duplicate a string.|
|ft_strlcat|Concatenate strings with length restrictions.|
|ft_strlcpy|Copy strings with length restrictions.|
|ft_strlen|Calculate the length of a string.|
|ft_strncmp|Compare two strings up to a certain number of characters.|
|ft_strnstr|Locate a substring within a string up to a certain number of characters.|
|ft_strrchr|Locate last occurrence of character in string.|

## unistd.h

|Function|Description|
|:--|:--|
|ft_putchar_fd|Output a character to a file descriptor.|
|ft_putendl_fd|Output a string to a file descriptor, followed by a newline.|
|ft_putnbr_fd|Output an integer to a file descriptor.|

---  
|                                                                                    |

---
**Part I**  
ft_isalpha  
ft_isdigit  
ft_isalnum  
ft_isascii  
ft_isprint  
ft_strlen  
ft_memset  
ft_bzero  
ft_memcpy  
ft_memmove   
ft_strlcpy  
ft_strlcat   
ft_toupper  
ft_tolower
ft_strchr  
ft_strrchr  
ft_strncmp  
ft_memchr  
ft_memcmp  
ft_strnstr  
ft_atoi  
ft_calloc  
ft_strdup  
  
**Part II**  
ft_substr  
ft_strjoin  
ft_strtrim  
ft_split  
ft_itoa  
ft_strmapi  
ft_striteri   
ft_putchar_fd  
ft_putstr_fd  
ft_putendl_fd  
ft_putnbr_fd  

**Bonus**    
ft_lstnew  
ft_lstadd_front  
ft_lstsize  
ft_lstlast  
ft_lstadd_back  
ft_lstdelone  
ft_lstclear  

---
---
