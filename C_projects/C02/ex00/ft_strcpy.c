/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:06:19 by victode-          #+#    #+#             */
/*   Updated: 2025/08/03 10:47:41 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(void)
{
	char	src[] = "Hello, World!!!";
	char	dest[50];
	
	ft_putstr("Source string: \"");
	ft_putstr(src);
	ft_putstr("\";\n");
	ft_putstr("Original dest: \"");
	ft_putstr(dest);
	ft_putstr("\" (blank);\n");
	
	ft_strcpy(dest, src);
	ft_putstr("Calling function...\n");
	
	ft_putstr("Copied dest: \"");
	ft_putstr(dest);
	ft_putstr("\";\n");
	return (0);
}
*/