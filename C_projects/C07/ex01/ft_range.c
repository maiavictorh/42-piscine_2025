/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:34:08 by victode-          #+#    #+#             */
/*   Updated: 2025/08/11 11:29:02 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (!tab || min >= max)
		return (NULL);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
/*
void	print_arr(int *tab, int size)
{
	if (tab == NULL)
		printf("NULL array!");
	int	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
}
int	main(void)
{
	int	*tab;

	tab = ft_range(3, 3);
	printf("Test 1 (3, 3): ");
	print_arr(tab, 0);
	printf(";\n\n");
	tab = ft_range(10, 5);
	printf("Test 2 (10, 5): ");
	print_arr(tab, -5);
	printf(";\n\n");
	tab = ft_range(5, 10);
	printf("Test 3 (5, 10): [");
	print_arr(tab, 5);
	printf("];\n\n");
	free(tab);
	tab = ft_range(-3, 3);
	printf("Test 4 (-3, 3): [");
	print_arr(tab, 3 - (-3));
	printf("];\n");
	free(tab);
	return (0);
}
*/