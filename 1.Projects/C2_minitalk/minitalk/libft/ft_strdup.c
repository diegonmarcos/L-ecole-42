/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:09:18 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:34 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, len);
	return (dest);
}

/*int	main()
{
	char	str[] = "Vou ser duplicado e nem te apercebes!";
	char	str1[] = "Ve o valgrind!";
	char	str2[] = "Ou o pyhtontutor!";
	ft_putendl_fd(ft_strdup(str), 1);
	ft_putendl_fd(ft_strdup(str1), 1);
	ft_putendl_fd(ft_strdup(str2), 1);
}*/
