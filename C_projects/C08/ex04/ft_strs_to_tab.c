/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:36:16 by victode-          #+#    #+#             */
/*   Updated: 2025/08/16 15:01:59 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*dest;

	i = 0;
	src_len = ft_strlen(src);
	dest = malloc(src_len + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			a;
	int			i;
	t_stock_str	*tab;

	a = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (a < ac)
	{
		tab[a].str = av[a];
		tab[a].size = ft_strlen(av[a]);
		tab[a].copy = ft_strdup(av[a]);
		if (!tab[a].copy)
		{
			i = 0;
			while (i < a)
				free(tab[i++].copy);
			free(tab);
			return (NULL);
		}
		a++;
	}
	tab[a].str = NULL;
	return (tab);
}
/*
int	main(void)
{
	char		*av[] = {"test1", "test2", "test3"};
	int			i;
	int			ac = 3;
	t_stock_str	*tab = ft_strs_to_tab(ac, av);
	if (!tab)
	{
		printf("Erro de alocacao\n");
		return (1);
	}
	i = 0;
	while (tab[i].str != NULL)
	{
		printf("String %d:\n", i);
		printf("  str: %s\n", tab[i].str);
		printf("  size: %d\n", tab[i].size);
		printf("  copy: %s\n\n", tab[i].copy);
		i++;
	}
	i = 0;
	while (tab[i].str != NULL)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}
*/