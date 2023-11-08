#include <stdlib.h>

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int	size;
	char	*string;
	int	i;
	
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = (char *)malloc(sizeof(char) * size);
	if (!string)
		return (NULL);
	while (*s1 != '\0')
	{
		string[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		string[i] = *s2;
		i++;
		s2++;
	}
	string[i] = '\0';
	return (string);
}

	
	
