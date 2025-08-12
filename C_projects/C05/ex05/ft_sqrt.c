/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:51:16 by victode-          #+#    #+#             */
/*   Updated: 2025/08/10 13:07:17 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb < 0)
		return (0);
	while (n <= 46340 && n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
/*
int	main()
{
	int	nb = 144;
	int	result = ft_sqrt(nb);
	printf("Number: %d;\nResult: %d;", nb, result);
}
*/