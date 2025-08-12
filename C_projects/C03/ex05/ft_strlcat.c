/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:56:34 by victode-          #+#    #+#             */
/*   Updated: 2025/08/05 16:19:04 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	d;
	unsigned int	s;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	d = dst_len;
	s = 0;
	return (dst_len + src_len);
}
/*
int	main()
{
	char	dest[] = "Hello, ";
	char	src[] = "World!!!";
	int		size = ft_strlcat(dest, src, sizeof(dest));
	printf("Dest: %s;\nSrc: %s;\n", dest, src);
	ft_strlcat(dest, src, sizeof(dest));
	printf("Concat: %s;\nTotal size: %d;\n", dest, size);
}
*/