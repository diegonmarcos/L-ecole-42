/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:32:10 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/12/02 21:01:25 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
size_t			ft_strlen(const	char *s);

unsigned int	ft_num_unsign(unsigned int num);
int				ft_pointer_hexa(void *p);
int				ft_hexa_minusc(int num);
int				ft_hexa_mayusc(int num);

int				ft_printf(const	char *str, ...);

#endif
