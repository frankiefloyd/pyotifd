void	ft_bzero(void *s, int n)
{
	unsigned char *ptr = (unsigned char *)s;
	unsigned char zero;

	zero = 0;
	while (n > 0))
	{
		*ptr = zero;
		ptr++;
		n--;
	}
}
