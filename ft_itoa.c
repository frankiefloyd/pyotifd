int	ft_count(long n)
{	
	int	count;

	count = 0;
	if (n >= -9 && n <= 9)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

#include <stdlib.h>

char *ft_itoa(int n)
{
	long rez;
	char *number;
	int	i;
	
	rez = n;
	if (rez < 0)
	{
		rez *= -1;
		number = (char *)malloc(sizeof(char) * (ft_count(rez) + 2));
		i = ft_count(rez) + 1;
	}
	else
	{
		number = (char *)malloc(sizeof(char) * (ft_count(rez) + 1));
		i = ft_count(rez);
	}
	if (!number)
		return (NULL);
	number[i] = '\0';
	while (rez != 0)
	{
		i--;
		number[i] = (rez % 10 + '0');
		rez /= 10;
	}
	if (n < 0)
		number[0] = '-';
	return (number);
}
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	nb;
	int count;
	char *num;

	nb = atoi(argv[1]);
	count = 0;
	num = ft_itoa(nb);

	printf("%d a %d digits\n", nb, ft_count(nb));

	printf("voici la chaine de caracteres obtenue %s\n", num);
	free(num);
	return (0);
}
