int	ft_atoi(const char *str)
{
	int	i;
	int	rez;
	int	sign;

	i = 0;
	rez = 0;
	sign = 1;
	while (str[i] != '\0' && ((str[i] > 7 && str[i] < 14) || str[i] == 32))
		i++;
	if (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		rez = rez * 10 + (str[i] - '0');
		i++;
	}
	return (rez * sign);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("		a42g"));
	return (0);
}
