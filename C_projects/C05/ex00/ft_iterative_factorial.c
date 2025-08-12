/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:25:57 by victode-          #+#    #+#             */
/*   Updated: 2025/08/10 13:07:28 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
		n = n * nb--;
	return (n);
}
/*
int main()
{
	int	nb = 5;
	printf("Factorial of %d: %d;", nb, ft_iterative_factorial(nb));
}
*/