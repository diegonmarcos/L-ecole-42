/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:52:28 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main()
{
	ft_putnbr_fd(ft_isascii(50), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(100), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(190), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(200), 1);
	ft_putchar_fd('\n', 1);
}*/
