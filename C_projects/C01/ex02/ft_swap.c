/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:18:48 by victode-          #+#    #+#             */
/*   Updated: 2025/07/30 21:19:10 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
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
	int	b = 21;
	
	putnbr(a);
	write (1, " | ", 3);
	putnbr(b);
	ft_putchar('\n');
	
	ft_swap(&a, &b);
	
	putnbr(a);
	write (1, " | ", 3);
	putnbr(b);
	ft_putchar('\n');
	return (0);
}
*/