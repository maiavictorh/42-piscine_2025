/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:09:53 by victode-          #+#    #+#             */
/*   Updated: 2025/08/03 16:36:10 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_char(int x, int y, int col, int ln)
{
	if (ln == 1 && col == 1)
		ft_putchar('/');
	else if (ln == 1 && col == x)
		ft_putchar('\\');
	else if (ln == y && col == 1)
		ft_putchar('\\');
	else if (ln == y && col == x)
		ft_putchar('/');
	else if (ln == 1 || ln == y || col == 1 || col == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	col;
	int	ln;

	ln = 1;
	while (ln <= y)
	{
		col = 1;
		while (col <= x)
		{
			ft_print_char(x, y, col++, ln);
		}
		ft_putchar('\n');
		ln++;
	}
}
