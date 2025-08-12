/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:16:24 by victode-          #+#    #+#             */
/*   Updated: 2025/07/30 21:17:25 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
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
	int	nbr;
	
	ft_ft(&nbr);
	ft_putnbr(nbr);
	ft_putchar('\n');
	return (0);
}
*/