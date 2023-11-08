#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;
	unsigned int	i;

	substring = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (!substring)
		return (NULL);
	while (*s != '\0' && i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}

/*#include <stdio.h>

int	main(void)
{
	char *str = "Je suis un avion de sol";
	char *sub;
	

	sub = ft_substr(str, 78, 5);
	printf("voici la sub str : %s\n", sub);
	free(sub);
	return (0);
}
*/	
