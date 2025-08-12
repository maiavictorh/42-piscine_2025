/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:19:21 by victode-          #+#    #+#             */
/*   Updated: 2025/08/11 18:35:03 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int	main(void)
{
	char	s1[] = "Hello world!";
	char	s2[] = "Hello World!";
	int		n1 = 42;
	int		n2 = 21;

	ft_putstr("Putchar: ");
	ft_putchar('c');
	ft_putstr("\nPutstr: ");
	ft_putstr(s1);
	ft_putstr("\nStrlen: ");
	ft_putnbr(ft_strlen(s1));
	ft_putstr("\nStrcmp: ");
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putstr("\nBefore Swap: ");
	ft_putnbr(n1);
	ft_putstr(" | ");
	ft_putnbr(n2);
	ft_swap(&n1, &n2);
	ft_putstr("\nAfter Swap: ");
	ft_putnbr(n1);
	ft_putstr(" | ");
	ft_putnbr(n2);
	ft_putchar('\n');
	return (0);
}
