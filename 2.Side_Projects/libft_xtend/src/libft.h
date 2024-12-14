/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:47:54 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/12/14 23:24:47 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// ################# LIBFT EXTENDED FUNCTIONS #######################

// ##################################################################
// --- 0. Libraries
// --- 1. String Manipulation
//          Comparisons and Len
//          Concatenation & Splitting
//          Search
//          Copying
//          Converters
// --- 2. Input & Output
//          Standard Output
//          File Input & Output
// --- 3. Memory Management
//          Manipulating Memory
//          Allocating Memory
// --- 4. Algos/Strings & Methods
//          Methods
//          Algos/Strings
// --- 5. Algos/Sorting
//          Large Data Sets (Quick, Merge, Heap, Timsort, Radix)
//          Small Data Sets (Insertion Quick)
// --- 6. Algos/Searching (Linear, Binary, Hash Tables, BFS, DFS)
//    
// --- 7. Linked Lists
//    
// --- 8. Macros
//        printf_S and printf_D
//        <assert.h> implementation macro 
// ###################################################################

// --- 0. Libraries
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

// --- 1. String Manipulation
//          Comparisons and Len
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);

//          Concatenation & Splitting
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(const char *s, char c);

//          Copying
//      strcpy
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);

//          Search
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

//          Converters
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
//
// --- 2. Input & Output
//          Standard Output
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
//      ft_printf

//
//          File Input & Output
//      fopen
//      fclose
//      fread
//      fwrite
//      ft_get_next_line

//
// --- 3. Memory Management
//          Manipulating Memory
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
//
//          Allocating Memory
// ft_malloc
// ft_free
// ft_realloc
void	*ft_calloc(size_t count, size_t size);
//
// --- 4. Algos/Strings & Methods
//          Methods
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//
//          Algos/Strings
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
//
// --- 5. Algos/Sorting
// ---      Large Data Sets
// ---      Quick
// ---      Merge
// ---      Heap
// ---      TimSort
// ---      Radix/Binary
// ---      Radix/Base10
// ---      Small Data Sets
// ---      Insertiom
// ---      Quick Sort
//
// --- 6. Algos/Searching (Linear, Binary, Hash Tables, BFS, DFS)
/* --- Search Algorithms: 
 - Linear Search (Unsorted Data)
 - Binary Search (Sorted Data)
 - Hash Tables (Key-Value Pairs) 
 * Breadth-First Search (BFS) (Tree Search)
 * Depth-First Search (DFS) (Tree Search) */

// --- 7. Linked Lists

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void*));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));
//
/*
// --- 8. Macros
//       Pritnf Macro
#define PRINT_S(var) printf("%s = %s\n", #var, var);
#define PRINT_D(var) printf("%s = %d\n", #var, var);

//       Assert
#define MY_ASSERT(condition) do { \
    if (!(condition)) { \
        printf("Assertion failed: %s (%s:%d)\n", \
		#condition, __FILE__, __LINE__); \
        abort(); \
    } \
} while (0)
*/

#endif
