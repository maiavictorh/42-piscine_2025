/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:09:43 by victode-          #+#    #+#             */
/*   Updated: 2025/08/03 18:57:02 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 'A' || str[i] > 'Z'))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (((str[i - 1] < 'a' || str[i - 1] > 'z')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < '0' || str[i - 1] > '9')
				&& !(str[i] < 'a' || str[i] > 'z')))
			str[i] -= 32;
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
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_putstr("Original string: \"");
	ft_putstr(str);
	ft_putstr("\";\n");

	ft_strcapitalize(str);

	ft_putstr("Modified string: \"");
	ft_putstr(str);
	return (0);
	ft_putstr("\";\n");
}
*/