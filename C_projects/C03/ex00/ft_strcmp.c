/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:51:36 by victode-          #+#    #+#             */
/*   Updated: 2025/08/05 17:13:08 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main()
{
	char	*s1 = "Hello, world!";
	char	*s2 = "Hello, World!";
	int		result = ft_strcmp(s1, s2);
	printf("String 1: %s;\nString 2: %s;\nResult: %d;\n", s1, s2, result);
}
*/