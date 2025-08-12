/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:55:06 by victode-          #+#    #+#             */
/*   Updated: 2025/08/05 17:40:50 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	s;
	unsigned int	d;

	s = 0;
	d = 0;
	while (dest[d])
		d++;
	while (src[s] && s < n)
		dest[d++] = src[s++];
	dest[d++] = 0;
	return (dest);
}
/*
int	main()
{
	char	dest[15] = "Hello, ";
	char	*src = "World!";

	printf("Dest: %s;\n", dest);

	char	*result = ft_strncat(dest, src, 3);
	printf("Src: %s;\nConcat: %s;\n", src, result);
}
*/