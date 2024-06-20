/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 03:12:22 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/15 20:04:46 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *ret;
    size_t  s_len;

    if (!s)
        return (NULL);  // Use NULL instead of 0

    s_len = ft_strlen(s); // Calculate strlen only once
    if (s_len < start)
        return (NULL);   // Use NULL instead of 0

    // Use the calculated s_len here
    if (s_len - start < len)  
        len = s_len - start;  

    ret = malloc(sizeof(char) * (len + 1));
    if (!ret)
        return (NULL);  // Use NULL instead of 0

    ft_strlcpy(ret, s + start, len + 1);
    return (ret);
}

