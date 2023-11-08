void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char	*dest;
	char	*source;
	int		n;

	dest = (char *)dst;
	source = (const char *)src;
	n = len;
	if (dest == src)
		return (dst);
	else if (dest < source)
	{
		while (n > 0)
		{
			*dest++ = *source++;
			n--;
		}
		return (dst);
	}
	else
	{
		dest += len - 1;
		source += len - 1;
		while (n > 0)
		{
			*dest-- = *src--;
			n--;
		}
		return (dst);
	}
}

	
	
