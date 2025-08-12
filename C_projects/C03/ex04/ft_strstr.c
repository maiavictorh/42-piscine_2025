/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:55:50 by victode-          #+#    #+#             */
/*   Updated: 2025/08/06 10:39:53 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		f = 0;
		while (to_find[f] && to_find[f] == str[i + f])
			f++;
		if (to_find[f] == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	*str = "Hello people of the world!";
	char	*to_find = "of";
	char	*result = ft_strstr(str, to_find);
	printf("String: %s;\nSubstring: %s;\nResult: %s;\n", str, to_find, result);
}
*/