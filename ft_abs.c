int	ft_abs(int number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int	number;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		printf("Calculons la valeur absolue de %d\n", number);
		printf("La valeur absolue de %d est %d\n", number, ft_abs(number));
	}
	else
		return (0);
}


