char *strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int original_len;
	const char	*flag;
	const char *original_needle;

	if (len == 0)
		return ((char *)haystack);
	original_len = len;
	original_needle = needle;
	while (*haystack != '\0'))
	{
		flag = haystack;
		while (*haystack == *needle && *haystack && *needle)
		{
			needle++;
			haystack++;
			len--;
		}
		if (len == 0 || *needle == '\0'))
			return ((char *)flag);
		else
		{
			needle = original_needle;;
			len = original_len;
		}
		haystack++;
	}
	return (0);
}
		


	
	
