#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>   
#include <unistd.h>
#include <string.h>

// ... Prototypes for AL functions (e.g.,)
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(int c);
int ft_memset(int c);
int ft_bzero(int c);
int ft_memcpy(int c);
int ft_memmove(int c);
int ft_strlcpy(int c);
int ft_strlcat(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strchr(int c);
int ft_strrchr(int c);
int ft_strncmp(int c);
int ft_memchr(int c);
int ft_memcmp(int c);
int ft_strnstr(int c);
int ft_atoi(int c);
int ft_calloc(int c);
int ft_strdup(int c);

typedef struct s_list
{
    void *content;
    struct s_list *next;
}   t_list;

// ...(Bonus function prototypes) ...
t_list *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void*));
void    ft_lstclear(t_list **lst, void (*del)(void*));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


#endif
