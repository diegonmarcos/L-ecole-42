/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:40:50 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/07 17:38:38 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void);
void	ft_is_negative(int n);
void	ft_print_numbers(void);
void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
void	ft_foreach(int *tab, int length, void(*f)(int));
int		ft_count_if(char **tab, int(*f)(char*));


int main()
{
	// ex06
	ft_print_alphabet();
	// ex07
	ft_print_numbers();
	// ex08
	ft_is_negative(0);
	// ex09
	int a;
	int *ptr;

	a = 0;
	ptr = &a;
	ft_ft(ptr);
	// ex10
	int a;
	int b;

	a = 42;
	b = 24;
	ft_swap(&a, &b);
	//ex11
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 24;
	ft_div_mod(a, b, &div, &mod);
	//ex12
	ft_iterative_factorial(5);
	//ex13
	ft_recursive_factorial(5);
	//ex14
	int	s_root;
	int	i;

	i = 1;
	s_root = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	while (i * i < nb)
		i++;
	if ((nb % i) == 0)
		return (i);
	else
		return (0);
	return 0;
	//ex15
	ft_putstr("Hello World!");
	//ex16
	ft_strlen("Hello World!");
	//ex17
	ft_strcmp("Hello World!", "Hello World!");
	//ex20
	ft_strdup("Hello World!");
	//ex21
	ft_range(1, 5);
	//ex25
	int	tab[5] = {1, 2, 3, 4, 5};
	void	(*f)(int);

	f = &ft_putnbr;
	ft_foreach(tab, 5, f);
	return 0;
	//ex26
		char	*tab[5] = {"Hello", "World", "!", "42", "Cursus"};
	int	(*f)(char*);

	f = &ft_strlen;
	ft_count_if(tab, f);
}