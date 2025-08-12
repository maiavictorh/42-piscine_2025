/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:54:29 by victode-          #+#    #+#             */
/*   Updated: 2025/08/06 10:40:00 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	s;
	int	d;

	s = 0;
	d = 0;
	while (dest[d])
		d++;
	while (src[s])
		dest[d++] = src[s++];
	dest[d] = 0;
	return (dest);
}
/*
int	main()
{
	char	dest[15] = "Hello, ";
	char	*src = "World!";
	
	printf("Dest: %s;\n", dest);
	
	char	*result = ft_strcat(dest, src);
	printf("Src: %s;\nConcat: %s;\n", src, result);
}
*/