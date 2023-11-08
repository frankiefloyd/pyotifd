int	ft_strlen(char *str)
{
	int	count;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int ft_strlcpy(char *dst, const char *src, unsigned int destsize)
{
	unsigned int i;

	i = 0
	if (destsize == 0)
		return (i);

	while (i < destsize -1 && str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	while (str[i] != '\0')
		i++;
	return (i);
}

