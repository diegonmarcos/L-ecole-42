/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <matomas@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:32:10 by matomas           #+#    #+#             */
/*   Updated: 2024/07/29 11:57:35 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_printf(const	char *str, ...);
unsigned int	ft_num_nosign(unsigned int num);
int				ft_punt_hexa(void *p);
size_t			ft_strlen(const	char *s);
int				ft_hexa_min(int num);
int				ft_hexa_mayus(int num);

#endif
