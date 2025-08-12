/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:09:18 by victode-          #+#    #+#             */
/*   Updated: 2025/08/03 15:47:41 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 'a' || str[i] > 'z') || !(str[i] < 'A' || str[i] > 'Z'))
		{
			if (!(str[i] < 'a' || str[i] > 'z'))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
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

int	main(void)
{
	char	str[] = "hello, world!!!";

	ft_putstr("Original string: \"");
	ft_putstr(str);
	ft_putstr("\";\n");

	ft_strupcase(str);

	ft_putstr("Modified string: \"");
	ft_putstr(str);
	ft_putstr("\";\n");
	return (0);
}
*/