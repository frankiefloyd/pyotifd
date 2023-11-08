int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const char *str1 = (char *)s1;
	const char *str2 = (char *)s2;

	while (*str1 == *str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	return ((int)*str1 - (int)*str2);
}
