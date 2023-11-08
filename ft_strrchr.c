char	*ft_strrchr(const char *s, int c)
{
	const char *start;

	start = s;
	while (*s != '\0')
		s++;
	if (c == 0)
		return ((char *)s);
	else
	{
		while (s >= start)
		{
			if (c == *s)
				return ((char *)s);
			else
				s--;
		}
	}
	return (0);
}

	
