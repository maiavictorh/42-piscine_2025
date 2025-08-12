/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:33:24 by victode-          #+#    #+#             */
/*   Updated: 2025/08/11 13:39:38 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>	

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	dest = malloc(src_len + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(void)
{
	char	*src = "Hello, World!!!";
	char	*dest = ft_strdup(src);

	if (dest == NULL)
	{
		printf("Strdup failed!");
		return (1);
	}
	printf("Original string: %s;\n", src);
	printf("Copied string: %s;\n", dest);
	free(dest);
	return (0);
}
*/