unsigned int	ft_strlcat(char *dst, const char *src, unsigned int destsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;

	while (i < destsize - 1 && dst[i] != '\0')
		i++;
	while (i < destsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';

	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	return (i);
}

