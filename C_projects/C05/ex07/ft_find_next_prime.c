/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:52:01 by victode-          #+#    #+#             */
/*   Updated: 2025/08/10 13:07:03 by victode-         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
int	main()
{
	int	n = 30012;
	int	nxt_prm = ft_find_next_prime(n);
	printf("Input: %d Next prime: %d\n", n, nxt_prm);
}
*/