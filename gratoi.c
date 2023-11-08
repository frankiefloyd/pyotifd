#include <stdio.h>

int	ft_atoi(char *str)
{
	long	rez;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	rez = 0;
	while(str[i] && ((str[i] > 8 && str[i] < 14) || str[i] == 32))
		i++;
	while(str[i] && str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		rez = rez * 10 + (str[i] - '0');
		i++;
	}
	return (rez * sign);
}

