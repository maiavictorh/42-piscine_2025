/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:08:35 by victode-          #+#    #+#             */
/*   Updated: 2025/07/28 21:35:50 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	comb[3];

	comb[0] = '0';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				ft_putchar(comb[0]);
				ft_putchar(comb[1]);
				ft_putchar(comb[2]);
				if (comb[0] < '7')
					write (1, ", ", 2);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}
*/