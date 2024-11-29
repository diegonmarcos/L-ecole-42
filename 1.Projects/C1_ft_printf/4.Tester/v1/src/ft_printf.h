/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:32:10 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/11/29 21:07:09 by dinepomu         ###   ########.fr       */
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

// --- FT_PRINTF ---
unsigned int	ft_num_nosign(unsigned int num);
/*
 *   This function converts an unsigned integer to its string representation
 *   without a sign.
 *   @param num - The unsigned integer to be converted.
 *   @return The string representation of the unsigned integer.
 */
int				ft_punt_hexa(void *p);
 /*
 *   This function converts a pointer to its hexadecimal string representation.
 *   @param p - The pointer to be converted.
 *   @return The number of characters written.
 */
int				ft_hexa_min(int num);
 /*
 *   This function converts an integer to its lowercase hexadecimal string
 *   representation.
 *   @param num - The integer to be converted.
 *   @return The number of characters written.
 */
int				ft_hexa_mayus(int num);
 /*
 *   This function converts an integer to its uppercase hexadecimal string
 *   representation.
 *   @param num - The integer to be converted.
 *   @return The number of characters written.
 */

int				ft_printf(const	char *str, ...); 
/*
 *   This function is the main entry point for the custom printf implementation.
 *   It takes a format string and a variable number of arguments, processes the
 *   format string, and prints the formatted output to the standard output.
 *   @param format - A C string that contains the text to be written to stdout.
 *                   It can optionally contain embedded format specifiers that
 *                   are replaced by the values specified in subsequent
 *                   additional arguments.
 *   @param ... - Additional arguments specifying the data to be printed.
 *   @return The total number of characters written is returned.
 */

#endif
