void	*memchr(const void *s, int c, unsigned int n)
{
	const char *str = (char *)s;
	unsigned char cara = (unsigned char)c;

	while (n > 0)
	{
		if (*str == cara)
			return (str);
		else
		{
			str++;
			n--;
		}
	}
	if (*str == cara)
		return (str);
	else
		return (0);
}
