/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:09:57 by victode-          #+#    #+#             */
/*   Updated: 2025/08/07 12:44:18 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (src_len);
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
		n -= n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(void)
{
	char	dest[2];
	unsigned int	rtn;

	// Test 1: String fits the buffer:
	rtn = ft_strlcpy(dest, "Hello, world!!!", sizeof(dest));
	ft_putstr("Test 1: \"");
	ft_putstr(dest);
	ft_putstr("\" | Original size: ");
	ft_putnbr(rtn);
	ft_putstr(";\n");

	// Test 2: String larger than buffer:
	rtn = ft_strlcpy(dest, "Hello, people of the world!!!", 10);
	ft_putstr("Test 2: \"");
	ft_putstr(dest);
	ft_putstr("\" | Original size: ");
	ft_putnbr(rtn);
	ft_putstr(";\n");

	// Test 3: Buffer size is 0:
	rtn = ft_strlcpy(dest, "Hello, 42 world!!!", 0);
	ft_putstr("Test 3: \"");
	ft_putstr(dest);
	ft_putstr("\" | Original size: ");
	ft_putnbr(rtn);
	ft_putstr(";\n");

	// Test 4: Empty string:
	rtn = ft_strlcpy(dest, "", sizeof(dest));
	ft_putstr("Test 4: \"");
	ft_putstr(dest);
	ft_putstr("\" | Original size: ");
	ft_putnbr(rtn);
	ft_putstr(";\n");
	return (0);
}
*/