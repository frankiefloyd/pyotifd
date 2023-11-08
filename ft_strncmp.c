int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}

	if (n == 0)
		return (0);

	return (*s1 - *s2);
}

