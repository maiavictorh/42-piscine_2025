/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:51:37 by victode-          #+#    #+#             */
/*   Updated: 2025/08/10 13:07:11 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	n;

	n = 0;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if ((nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	n = 5;
	while (n * n <= nb)
	{
		if ((nb % n == 0) || (nb % (n + 2) == 0))
			return (0);
		n += 6;
	}
	return (1);
}
/*
int	main()
{
	int	n1 = 941;
	int	n2 = 18;
	printf("Input: %d Returns: %d\n", n1, ft_is_prime(n1));
	printf("Input: %d Returns: %d\n", n2, ft_is_prime(n2));
}
*/