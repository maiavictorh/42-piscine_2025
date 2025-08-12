#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (sign * num);
}

int main()
{
	char *str = "\t\f\v\n\f    +1234abc567";
	printf ("%d\n%d\n", atoi(str), ft_atoi(str));
}