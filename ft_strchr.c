char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		else
			s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}
		