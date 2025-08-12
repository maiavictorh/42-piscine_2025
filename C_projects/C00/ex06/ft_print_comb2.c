/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:13:01 by victode-          #+#    #+#             */
/*   Updated: 2025/08/02 16:34:22 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_digits(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			print_digits(f);
			write (1, " ", 1);
			print_digits(s);
			if (f != 98 || s != 99)
				write (1, ", ", 2);
			s++;
		}
		f++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
*/