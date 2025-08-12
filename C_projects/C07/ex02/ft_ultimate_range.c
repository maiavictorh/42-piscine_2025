/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:34:38 by victode-          #+#    #+#             */
/*   Updated: 2025/08/10 11:42:59 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!tab)
		return (-1);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (size);
}
/*
void	print_tab(int *tab, int size)
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

int	main()
{
	int	*tab;
	int	size;
	
	size = ft_ultimate_range(&tab, 5, 10);
	printf("Test 1 - (5, 10): [");
	print_tab(tab, size);
	printf("];\n");
	printf("Returned size: ");
	printf("%d", size);
	printf(";\n\n");
	free(tab);
	
	size = ft_ultimate_range(&tab, 10, 5);
	printf("Test 2 - (10, 5): ");
	print_tab(tab, size);
	printf(";\n");
	printf("Returned size: ");
	printf("%d", size);
	printf(";\n\n");
	
	size = ft_ultimate_range(&tab, 10, 10);
	printf("Test 3 - (10, 10): ");
	print_tab(tab, size);
	printf(";\n");
	printf("Returned size: ");
	printf("%d", size);
	printf(";\n\n");
	
	size = ft_ultimate_range(&tab, -5, 5);
	printf("Test 4 - (-5, 5): [");
	print_tab(tab, size);
	printf("];\n");
	printf("Returned size: ");
	printf("%d", size);
	printf(";\n");
	free(tab);
	return (0);
}
*/