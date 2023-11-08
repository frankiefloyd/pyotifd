#include <stdlib.h>

char *strdup(const char *s1)
{
	int	len;
	char *copied;
	int	i;

	len = 0;
	while (s1[i] != '\0')
		len++;
	copied = (char *)malloc(sizeof(char) * (len + 1));
	while (*str != '\0')
	{
		*copied = *str;
		copied++;
		str++;
	}
	*copied = '\0';
	return (copied);
}
