# libft  
\  
# Summary:

This project is about coding a C library.

It will contain a lot of general purpose functions your programs will rely upon.  
**Character Classification:**  
ft_isalpha, ft_isdigit ft_isalnum ft_isascii ft_isprint  
**String Operations:**  
ft_strlen ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_strdup  
**String Manipulation (Advanced):**  
ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri  
**Memory Manipulation:**   
ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_calloc
**Conversions**  
ft_atoi  
**I/O File Descriptors**  
ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd  
**Linked List Operations**  
ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap  

# Struct
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
