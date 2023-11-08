char	*strnstr(const char *haystack, const char *needle, unsigned int len)
{
	const char *flag;
	const char	*needle_start;
	unsigned int	original_len;

	while (*haystack != '\0' && *haystack != *needle)
		haystack++;
	if (*haystack == '\0')
		return (0); 
	flag = haystack; // a ce moment on a *haystack = *needle, on pose un flag
	needle_start = needle;
	original_len = len;
	while (len > 0 && *haystack != '\0')
	{	
		flag = haystack;
		while (*needle != '\0' && *needle == *haystack)
		{
			needle++;
			haystack++;
			len--;
		}
		if (len == 0)
			return (flag);
		else
			len = original_len;
	}

		
