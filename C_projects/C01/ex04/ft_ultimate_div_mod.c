/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:20:22 by victode-          #+#    #+#             */
/*   Updated: 2025/07/30 21:21:47 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_temp;

	a_temp = *a;
	*a = *a / *b;
	*b = a_temp % *b;
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
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
	ft_putchar(n % 10 + '0');
}

int	main(void)
{
	int	a = 42;
	int	b = 10;

	if (b > 0)
	{
		write (1, "Values of a and b: ", 19);
		putnbr(a);
		write(1, ", ", 2);
		putnbr(b);
		ft_putchar('\n');

		ft_ultimate_div_mod(&a, &b);

		write (1, "Values stored in a and b: ", 26);
		putnbr(a);
		write (1, ", ", 2);
		putnbr(b);
		ft_putchar('\n');
	}
	return (0);
}
*/