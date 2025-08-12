/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:19:32 by victode-          #+#    #+#             */
/*   Updated: 2025/07/30 21:20:09 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	putnbr(a);
	write (1, " / ", 3);
	putnbr(b);
	write (1, " = ", 3);
	putnbr(div);
	ft_putchar('\n');

	putnbr(a);
	write (1, " % ", 3);
	putnbr(b);
	write (1, " = ", 3);
	putnbr(mod);
	ft_putchar('\n');
	return (0);
}
*/