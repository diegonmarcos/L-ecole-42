
# LIBFT

## 1. I/O Printers
- [ft_putchar_fd](1.IOPrinters/ft_putchar_fd): Writes a single character to a given file descriptor. 
    ```C
    void    ft_putchar_fd(char c, int fd)
    ```
- [ft_putstr_fd](1.IOPrinters/ft_putstr_fd): Writes a string to a given file descriptor.
    ```C
    void    ft_putstr_fd(char *s, int fd)
    ```
- [ft_putendl_fd](1.IOPrinters/ft_putendl_fd): Writes a string to a given file descriptor, followed by a newline.
    ```C
    void    ft_putendl_fd(char *s, int fd)
    ```
- [ft_putnbr_fd](1.IOPrinters/ft_putnbr_fd): Writes an integer to a given file descriptor.
    ```C
    void    ft_putnbr_fd(int n, int fd)
    ```

## 2. String Classification
- [ft_strlen](2.StringClassification/ft_strlen): Calculates the length of a string.
    ```C
    size_t  ft_strlen(const char *s)
    ```
- [ft_isalpha](2.StringClassification/ft_isalpha): Checks if a character is alphabetic.
    ```C
    int     ft_isalpha(int c)
    ```
- [ft_isdigit](2.StringClassification/ft_isdigit): Checks if a character is a digit.
    ```C
    int     ft_isdigit(int c)
    ```
- [ft_isalnum](2.StringClassification/ft_isalnum): Checks if a character is alphanumeric.
    ```C
    int     ft_isalnum(int c)
    ```
- [ft_isascii](2.StringClassification/ft_isascii): Checks if a character is a valid ASCII character.
    ```C
    int     ft_isascii(int c)
    ```
- [ft_isprint](2.StringClassification/ft_isprint): Checks if a character is printable.
    ```C
    int     ft_isprint(int c)
    ```

## 3. String Formatting
- [ft_memset](3.StringFormatting/ft_memset): Fills a block of memory with a specific byte.
    ```C
    void    *ft_memset(void *b, int c, size_t len)
    ```
- [ft_bzero](3.StringFormatting/ft_bzero): Sets a block of memory to zero.
    ```C
    void    ft_bzero(void *s, size_t n)
    ```
- [ft_toupper](3.StringFormatting/ft_toupper): Converts a character to uppercase.
    ```C
    int     ft_toupper(int c)
    ```
- [ft_tolower](3.StringFormatting/ft_tolower): Converts a character to lowercase.
    ```C
    int     ft_tolower(int c)
    ```
- [ft_atoi](3.StringFormatting/ft_atoi): Converts a string to an integer.
    ```C
    int     ft_atoi(const char *str)
    ```
- [ft_itoa](3.StringFormatting/ft_itoa): Converts an integer to a string.
    ```C
    char    *ft_itoa(int n)
    ```
- [ft_strmapi](3.StringFormatting/ft_strmapi): Applies a function to each character of a string, passing the index as an argument.
    ```C
    char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
    ```
- [ft_striteri](3.StringFormatting/ft_striteri): Applies a function to each character of a string, passing the index as an argument.
    ```C
    void    ft_striteri(char *s, void (*f)(unsigned int, char*))
    ```

## 4. String Search, Compare and Subs
- [ft_memcmp](4.StringSearchCompareSubs/ft_memcmp): Compares two blocks of memory.
    ```C
    int     ft_memcmp(const void *s1, const void *s2, size_t n)
    ```
- [ft_memchr](4.StringSearchCompareSubs/ft_memcmp): Searches for a character in a block of memory.
    ```C
    void    *ft_memchr(const void *s, int c, size_t n)
    ```
- [ft_strchr](4.StringSearchCompareSubs/ft_memcmp): Locates the first occurrence of a character in a string.
    ```C
    char    *ft_strchr(const char *s, int c)
    ```
- [ft_strrchr](4.StringSearchCompareSubs/ft_memcmp): Locates the last occurrence of a character in a string.
    ```C
    char    *ft_strrchr(const char *s, int c)
    ```
- [ft_strnstr](4.StringSearchCompareSubs/ft_memcmp): Locates a substring within a string.
    ```C
    char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
    ```
- [ft_strncmp](4.StringSearchCompareSubs/ft_memcmp): Compares two strings up to a specified length.
    ```C
    int     ft_strncmp(const char *s1, const char *s2, size_t n)
    ```
- [ft_substr](4.StringSearchCompareSubs/ft_memcmp): Extracts a substring from a string.
    ```C
    char    *ft_substr(char const *s, unsigned int start, size_t len)
    ```

## 5. Memory Copy, Move and Split
- [ft_memcpy](5.MemoryCopyMoveSplit/ft_memcpy): Copies a block of memory from one location to another.
    ```C
    void    *ft_memcpy(void *dst, const void *src, size_t n)
    ```
- [ft_memmove](5.MemoryCopyMoveSplit/ft_memcpy): Moves a block of memory from one location to another, handling overlapping regions.
    ```C
    void    *ft_memmove(void *dst, const void *src, size_t len)
    ```
- [ft_strlcpy](5.MemoryCopyMoveSplit/ft_memcpy): Copies a string to another string, with size bounds.
    ```C
    size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
    ```
- [ft_strlcat](5.MemoryCopyMoveSplit/ft_memcpy): Concatenates two strings, with size bounds.
    ```C
    size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
    ```
- [ft_strjoin](5.MemoryCopyMoveSplit/ft_memcpy): Joins two strings together.
    ```C
    char    *ft_strjoin(char const *s1, char const *s2)
    ```
- [ft_strdup](5.MemoryCopyMoveSplit/ft_memcpy): Creates a duplicate of a string.
    ```C
    char    *ft_strdup(const char *s1)
    ```
- [ft_strtrim](5.MemoryCopyMoveSplit/ft_memcpy): Removes leading and trailing whitespace from a string.
    ```C
    char    *ft_strtrim(char const *s1, char const *set)
    ```
- [ft_split](5.MemoryCopyMoveSplit/ft_memcpy): Splits a string into an array of substrings based on a delimiter.
    ```C
    char    **ft_split(char const *s, char c)
    ```
- [ft_calloc](5.MemoryCopyMoveSplit/ft_memcpy): Allocates memory and sets it to zero.
    ```C
    void    *ft_calloc(size_t count, size_t size)
    ```


## 6. Struct - Linked Lists
- [ft_lstnew]()
	```C
	t_list *ft_lstnew(void *content);
	```
- [ft_lstadd_front]()
	```C
	void ft_lstadd_front(t_list **lst, t_list *new);
	```
- [ft_lstsize]()
	``` c 
	int ft_lstsize(t_list *lst);
	```
- [ft_lstlast]()
	``` c 
	t_list *ft_lstlast(t_list *lst);
	```
- [ft_lstadd_back]()
	``` c 
	void ft_lstadd_back(t_list **lst, t_list *new);
	```
- [ft_lstdelone]()
	``` c
	void ft_lstdelone(t_list *lst, void (*del)(void*));
	```
- [ft_lstclear]()
	``` c
	void ft_lstclear(t_list **lst, void (*del)(void*));
	```
- [ft_lstiter]()
	``` c
	void ft_lstiter(t_list *lst, void (*f)(void*));
	```
- [ft_lstmap]()
	``` c 
	t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));
	```
##
---
## Level 1
- **1. I/O Printers:**
    - `ft_putchar_fd`
    - `ft_putstr_fd`
    - `ft_putendl_fd`
    - `ft_putnbr_fd`
- **2. String Classification:**
    - `ft_isalpha`
    - `ft_isdigit`
    - `ft_isalnum`
    - `ft_isascii`
    - `ft_isprint`
    - `ft_strlen  `
- **3. String Formatting:**
    - `ft_memset`
    - `ft_bzero`
    - `ft_toupper`
    - `ft_tolower`
- **4. String Search, Compare and Subs:**
    - `ft_strchr` 
    - `ft_strrchr` 
    - `ft_strncmp` 
- **5. Memory Copy, Move and Split:**
    - `ft_memcpy`
    - `ft_memmove`
- **6. Struct - Linked Lists:**
    - `ft_lstnew`
    - `ft_lstadd_front`
    - `ft_lstsize`
    - `ft_lstlast`
    - `ft_lstadd_back`
    - `ft_lstdelone`
## Level 2
- **3. String Formatting:**
    - `ft_atoi`
    - `ft_itoa`
    - `ft_strmapi`
    - `ft_striteri`
- **4. String Search, Compare and Subs:**
    - `ft_memcmp`
    - `ft_memchr`
    - `ft_strnstr`
    - `ft_substr`
- **5. Memory Copy, Move and Split:**
    - `ft_strlcpy`
    - `ft_strlcat`
    - `ft_strjoin`
    - `ft_strdup`
    - `ft_strtrim`
- **6. Struct - Linked Lists:**
    - `ft_lstclear`
    - `ft_lstiter`
## Level 3
- **5. Memory Copy, Move and Split:**
    - `ft_split` 
    - `ft_calloc`
- **6. Struct - Linked Lists:**
    - `ft_lstmap` 

##
---


<br>
<br>
<br>
<br>
<br>
<br>

# Analysis of the interconnections

**Interconnection Overview:**

Character Classification:
```
     ft_isalnum
        |     \
     ft_isalpha   ft_isdigit
```

Memory Manipulation:
```
     ft_calloc 
       |    \
    malloc   ft_bzero
                  |
                memset
```
```
    ft_memmove <---- ft_memcpy
       |
    move_memory    
```

String Manipulation:
```
   ft_strjoin   ft_strtrim   ft_split
          \      /         /
           ft_substr      /
                     ft_calloc
                     ft_free
```
```
   ft_strmapi
       |
    ft_strdup
```
```
   ft_strnstr
      |   \
  ft_strlen  ft_strncmp
```
```
   ft_strtrim
     |    \
 ft_strlen  ft_strchr
```

Integer-String Conversion:
```
      			ft_itoa 
   		 /		   |      	\
ft_calloc 	ft_digit_count   comp
                      		  |
                        ft_putnbr_fd
                              |
                         ft_putstr_fd
```
File Descriptor Output:
```
  ft_putendl_fd     ft_putnbr_fd
       | \             /
       |  ft_putstr_fd
       |       |
       \-------ft_putchar_fd
```



1. **Character Classification:**
   - `ft_isalnum` depends on
      - `ft_isalpha` and `ft_isdigit`.

2. **Memory Manipulation:**
   - `ft_calloc` depends on
      -  `malloc` and `ft_bzero`.
   - `ft_bzero` depends on
      - `memset`.
   - `ft_memcpy` is used within
      - `ft_memmove` (in the case of non-overlapping memory).
   - `ft_strdup` depends on
      - `ft_strlen`, `malloc`, and `ft_memcpy` (or `ft_strlcpy`).

3. **String Manipulation:**
   - `ft_strjoin`, `ft_strtrim`, and `ft_split` use
      - `ft_substr`.
   - `ft_split` also depends on
      - `ft_calloc` and `ft_free`.
   - `ft_strmapi` depends on
      - `ft_strdup`.
   - `ft_strnstr` depends on
      - `ft_strlen` and `ft_strncmp`.
   - `ft_strtrim` depends on
      - `ft_strlen` and `ft_strchr`.

4. **Integer-String Conversion:**
   - `ft_itoa` depends on
      - `ft_calloc`, `ft_digit_count` (a helper function), and `comp` (another helper function).
   - `ft_putnbr_fd` uses
      - `ft_itoa` and `ft_putstr_fd`.

5. **File Descriptor Output:**
   - `ft_putendl_fd` and `ft_putnbr_fd` depend on
      -  `ft_putstr_fd` and `ft_putchar_fd`.

#### LibC Functions #1
- ft_strlen
- ft_memcpy
- ft_memset
- ft_bzero
- ft_memmove
- ft_memcmp
- ft_memchr

#### LibC Functions #2
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint

#### LibC Functions #3
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr

#### LibC Functions #4
- ft_strlcat
- ft_strlcpy
- ft_atoi
- ft_strnstr
- ft_strncmp
- ft_calloc
- ft_strdup

#### Additional Functions #1
- ft_substr
- ft_strjoin
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

#### Additional Functions #2
- ft_strmapi
- ft_striteri
- ft_strtrim
- ft_split
- ft_itoa
