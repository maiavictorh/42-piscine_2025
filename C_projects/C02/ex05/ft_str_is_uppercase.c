/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:08:07 by victode-          #+#    #+#             */
/*   Updated: 2025/08/03 11:57:28 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(void)
{
	char	*str1 = "HELLO";
	char	*str2 = "WoRlD";
	char	*str3 = "";

	ft_putstr("First string: \"");
	ft_putstr(str1);
	ft_putstr("\" returns: ");
	ft_putnbr(ft_str_is_uppercase(str1));
	ft_putstr(";\n");

	ft_putstr("Second string: \"");
	ft_putstr(str2);
	ft_putstr("\" returns: ");
	ft_putnbr(ft_str_is_uppercase(str2));
	ft_putstr(";\n");

	ft_putstr("Third string: \"");
	ft_putstr(str3);
	ft_putstr("\" returns: ");
	ft_putnbr(ft_str_is_uppercase(str3));
	ft_putstr(";\n");
	return (0);
}
*/