/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:23:43 by victode-          #+#    #+#             */
/*   Updated: 2025/08/02 12:34:01 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
		ft_swap(&tab[i++], &tab[j--]);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(void)
{
	int	tab[] = {17, 22, 37, 1, 42};
	int	size = 5;
	int	i = 0;

	ft_putstr("Original table: {");
	while (i < size)
	{
		putnbr(tab[i]);
		if (i < size - 1)
			ft_putstr(", ");
		i++;
	}
	ft_putstr("};\n");

	i = 0;
	ft_rev_int_tab(tab, size);

	ft_putstr("Reversed table: {");
	while (i < size)
	{
		putnbr(tab[i]);
		if (i < size - 1)
			ft_putstr(", ");
		i++;
	}
	ft_putstr("};\n");
	return (0);
}
*/