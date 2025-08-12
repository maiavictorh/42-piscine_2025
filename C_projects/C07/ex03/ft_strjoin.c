/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:36:00 by victode-          #+#    #+#             */
/*   Updated: 2025/08/11 12:10:33 by victode-         ###   ########.fr       */
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

int	ft_strslen(char **strs, int size)
{
	int	s;
	int	len;

	s = 0;
	len = 0;
	while (s < size)
	{
		len += ft_strlen(strs[s]);
		s++;
	}
	return (len);
}

char	*cat_strs(char **strs, char *join, char *sep, int size)
{
	int	s;
	int	i;
	int	j;
	int	sp;

	s = 0;
	i = 0;
	while (s < size)
	{
		j = 0;
		sp = 0;
		while (strs[s][j])
			join[i++] = strs[s][j++];
		if (s < size - 1)
		{
			while (sep[sp])
				join[i++] = sep[sp++];
		}
		s++;
	}
	join[i] = 0;
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;

	join = malloc(ft_strslen(strs, size) + (ft_strlen(sep) * (size - 1)) + 1);
	if (size == 0)
		join[0] = 0;
	cat_strs(strs, join, sep, size);
	return (join);
}
/*
int	main(void)
{
	char	*strs[] = {"Ola", "bom", "dia"};
	char	*sep = ", ";
	char	*join;

	join = ft_strjoin(3, strs, sep);
	printf("%s\n", join);
	free(join);
	return (0);
}
*/