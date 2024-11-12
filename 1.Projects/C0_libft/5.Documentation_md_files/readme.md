
# LIBFT


## Printers
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
## String Formating
- ft_memset
- ft_bzero
- ft_toupper
- ft_tolower
- ft_atoi
- ft_itoa
- ft_strmapi
- ft_striteri
## Copy, Move memory and Split
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_strjoin
- ft_strdup
- ft_strtrim
- ft_split

## Search, Compare and Subs
- ft_memcmp
- ft_memchr
- ft_strchr : search first occurrence
- ft_strrchr : search last occurrence
- ft_strnstr
- ft_strncmp
- ft_substr

## String Classification
- ft_strlen
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint

## Memory Management
- ft_calloc

## Struct - Linked Lists
###### ft_lstnew
```C
t_list *ft_lstnew(void *content);
```

###### ft_lstadd_front
```C
void ft_lstadd_front(t_list **lst, t_list *new);
```
###### ft_lstsize
`int ft_lstsize(t_list *lst);`
###### ft_lstlast
`t_list *ft_lstlast(t_list *lst);`
###### ft_lstadd_back
`void ft_lstadd_back(t_list **lst, t_list *new);`
###### ft_lstdelone
`void ft_lstdelone(t_list *lst, void (*del)(void*));`
###### ft_lstclear
`void ft_lstclear(t_list **lst, void (*del)(void*));`
###### ft_lstiter
`void ft_lstiter(t_list *lst, void (*f)(void*));`
###### ft_lstmap
`t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));`
##
---
## Level 1
- All others
## Level 2
- ft_itoa
- ft_substr
## Level 3
- ft_split
- ft_lstmap

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
