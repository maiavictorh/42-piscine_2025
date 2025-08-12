/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 22:03:37 by victode-          #+#    #+#             */
/*   Updated: 2025/07/29 22:03:39 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int n, char *comb, int i, char print)
{
	if (i == n)
	{
		write(1, comb, n);
		if (comb[0] != '9' - n + 1)
			write(1, ", ", 2);
	}
	while (print <= '9')
	{
		comb[i] = print;
		ft_print_comb(n, comb, i + 1, print + 1);
		print++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n > 0 && n < 10)
	{
		ft_print_comb(n, comb, 0, '0');
	}
}
/*
int	main(void)
{
	ft_print_combn(4);
	ft_putchar('\n');
	return (0);
}
*/
