#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    if (!s)
        return NULL;
   
    size_t s_len = ft_strlen(s);
    if (start >= s_len)
        return ft_strdup(""); 

    size_t sub_len = s_len - start < len ? s_len - start : len;
    char *sub = malloc(sub_len + 1);
    if (!sub)
        return NULL;

    ft_strlcpy(sub, s + start, sub_len + 1);
    return sub;
}
