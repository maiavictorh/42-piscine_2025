/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:06:38 by victode-          #+#    #+#             */
/*   Updated: 2025/08/09 14:01:42 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
*/
/*
int	main(void)
{
	char	src[] = "Hello,";
	char	dest[] = "World!!!";

	ft_putstr("Original string: \"");
	ft_putstr(src);
	ft_putstr("\";\n");
	ft_putstr("Original dest: \"");
	ft_putstr(dest);
	ft_putstr("\" (blank);\n");

	ft_strncpy(dest, src, 4);
	ft_putstr("Calling function...\n");
	ft_putstr("Copied dest: \"");
	ft_putstr(dest);
	ft_putstr("\";\n");
	return (0);
}
*/
