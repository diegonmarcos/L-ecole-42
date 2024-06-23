/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 03:12:22 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/09 03:22:41 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdint.h>  // For SIZE_MAX

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (count > 0 && SIZE_MAX / count < size)
        return (NULL);  
    size_t total_size = count * size;
    ptr = malloc(total_size);
    if (ptr)
        ft_bzero(ptr, total_size); 
    return (ptr);