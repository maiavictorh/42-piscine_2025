#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int ac, char **av)
{
	char *str = av[1];
	char *cmp = av[1];
	int	i = 0;
	int j = 0;
	if (ac == 3)
	{
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
				str[i] = av[1][i];
			else if (av[1][i] != av[2][j])
				j++;
			i++;
		}
		if (ft_strcmp(str, cmp) != 0)
			write (1, "\n", 1);
		else
			ft_putstr(str);
	}
	write (1, "\n", 1);
	return (0);
}