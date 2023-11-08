void *memcpy(void *dest, void *src, int n)
{
	char *d = (char *)dest;
	char *s = (char *)src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (d);
}
