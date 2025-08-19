/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:38:11 by victode-          #+#    #+#             */
/*   Updated: 2025/08/14 13:05:49 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(void)
{
	int		a = 42;
	int		b = 21;
	char	*s1 = "Hello World!!!";
	char	*s2 = "Hello world!!!";

	ft_putstr("=========== ft_putchar ==========\n\n");
	ft_putchar('C');
	ft_putstr("\n\n=========== ft_swap =============\n\n");
	ft_putstr("Before: a = ");
	ft_putnbr(a);
	ft_putstr(" | b = ");
	ft_putnbr(b);
	ft_swap(&a, &b);
	ft_putstr("\nAfter: a = ");
	ft_putnbr(a);
	ft_putstr(" | b = ");
	ft_putnbr(b);
	ft_putstr("\n\n=========== ft_putstr ===========\n\n");
	ft_putstr(s1);
	ft_putstr("\n\n=========== ft_strlen ===========\n\n");
	ft_putstr(s1);
	ft_putstr(" = ");
	ft_putnbr(ft_strlen(s1));
	ft_putstr("\n\n=========== ft_strcmp ===========\n\n");
	ft_putstr(s1);
	ft_putstr(";\n");
	ft_putstr(s2);
	ft_putstr(";\nResult: ");
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putstr(";\n");
	return (0);
}