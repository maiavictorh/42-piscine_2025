/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:22:59 by victode-          #+#    #+#             */
/*   Updated: 2025/07/30 21:23:33 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
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
	char	str[50] = "Hello World!!!";

	ft_putstr(str);
	ft_putstr("\nLength: ");
	putnbr(ft_strlen(str));
	ft_putchar('\n');
	return (0);
}
*/