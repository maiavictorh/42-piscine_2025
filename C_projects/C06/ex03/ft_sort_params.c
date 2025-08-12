/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:20:34 by victode-          #+#    #+#             */
/*   Updated: 2025/08/07 18:55:26 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main(int ac, char **av)
{
	int	a;
	int	s;

	a = 1;
	while (a < ac)
	{
		s = a + 1;
		while (s < ac)
		{
			if (ft_strcmp(av[a], av[s]) > 0)
				ft_swap(&av[a], &av[s]);
			s++;
		}
		a++;
	}
	a = 1;
	while (a < ac)
	{
		ft_putstr(av[a++]);
		write (1, "\n", 1);
	}
	return (0);
}
