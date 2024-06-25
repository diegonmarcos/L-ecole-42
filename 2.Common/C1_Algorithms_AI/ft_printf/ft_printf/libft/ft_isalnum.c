/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:50:59 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int main()
{
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('F'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('x'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('\n'), 1);
	ft_putchar_fd('\n', 1);
}*/
