/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:32:10 by dinepomu          #+#    #+#             */
/*   Updated: 2024/12/03 15:16:30 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

// --- LIBFT ---
int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
size_t			ft_strlen(const	char *s);

// --- PRINTF ---

unsigned int	ft_num_unsign(unsigned int num);
/**
 * @brief Converts an unsigned integer to its unsigned representation.
 *
 * It is useful for ensuring that the numberis treated as an unsigned 
 * value in various operations.
 */

int				ft_pointer_hexa(void *p);
/**
 * @brief Converts a pointer to its hexadecimal representation.
 */

int				ft_hexa_minusc(int num);
/**
 * @brief Converts an integer to its hexadecimal representation.
 */

int				ft_hexa_mayusc(int num);
/**
 * @brief Converts an integer to its hexadecimal representation.
 */

int				ft_printf(const	char *str, ...);
/**
 * @brief Prints formatted output to the standard output.
 *
 * This function takes a format string and a variable number of arguments
 * and prints the formatted output to the standard output. It supports
 * a subset of the format specifiers supported by the standard printf
 * function.
 */

#endif
