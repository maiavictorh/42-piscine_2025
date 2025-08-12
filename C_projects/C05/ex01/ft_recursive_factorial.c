/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:46:28 by victode-          #+#    #+#             */
/*   Updated: 2025/08/10 13:07:36 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		n = nb * ft_recursive_factorial(nb - 1);
	return (n);
}
/*
int main()
{
	int	nb = 5;
	printf("Factorial of %d: %d;", nb, ft_recursive_factorial(nb));
}
*/