#include <stdlib.h>
#include <unistd.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *result;
	unsigned int i;
	unsigned int size;

	i = 0;
	size = 0;
	while (s[size] != '\0')
		size++;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result[size] = '\0';
	while (result[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
	
