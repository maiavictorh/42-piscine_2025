/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:50:57 by victode-          #+#    #+#             */
/*   Updated: 2025/08/08 12:52:52 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main()
{
	ft_putnbr(42);
	ft_putchar('\n');
	
	ft_putnbr(-42);
	ft_putchar('\n');
	
	ft_putnbr(0);
	ft_putchar('\n');
	
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	
	ft_putnbr(2147483647);
	ft_putchar('\n');
}
