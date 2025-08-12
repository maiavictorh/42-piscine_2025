/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:24:33 by victode-          #+#    #+#             */
/*   Updated: 2025/07/30 21:25:35 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(void)
{
	int	tab[] = {22, 42, 1, 37, 17};
	int	size = 5;
	int	i = 0;

	ft_putstr("Oringinal table: {");
	while (i < size)
	{
		putnbr(tab[i]);
		if (i < size - 1)
			ft_putstr(", ");
		i++;
	}
	ft_putstr("};\n");

	i = 0;
	ft_sort_int_tab(tab, size);

	ft_putstr("Organized table: {");
	while (i < size)
	{
		putnbr(tab[i]);
		if (i < size - 1)
			ft_putstr(", ");
		i++;
	}
	ft_putstr("};\n");
	return (0);
}
*/