#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long number;

	number = (long)n;
	if (number < 0)
	{
		number *= -1;
		ft_putchar_fd('-', fd);
	}
	if (number > 9)
	{
		ft_putnbr_fd((number / 10), fd);
		ft_putchar_fd((number % 10) + '0', fd);
	}
	if (number <= 9)
		ft_putchar_fd(number + '0', fd);
}

#include <stdlib.h>

int	main(int argc, char *argv[])
{
	ft_putnbr_fd(atoi(argv[1]), 1);
	return (0);
}

		

