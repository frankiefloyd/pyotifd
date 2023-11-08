#include <stdlib.h>

int	ft_is_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int	ft_strlen(const char *s1)
{
	int count;

	count = 0;
	while (*s1 != '\0')
	{
		count++;
		s1++;
	}
	return (count);
}

int	ft_del_count(char const *s1, char const *set)
{
	int	count;
	int len;
	int	i;

	count = 0;
	i = 0;
	len = ft_strlen(s1);
	while (ft_is_set(s1[i], set) && s1[i] != '\0')
	{
		count++;
		i++;
	}
	i = len - 1;
	while (ft_is_set(s1[i], set) && i >= 0)
	{
		count++;
		i--;
	}
	return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	j;
	int	k;
	char *new_string;
	
	j = 0;
	len = ft_strlen(s1) - ft_del_count(s1, set) + 1;
	new_string = malloc(sizeof(char) * len);
	if (!new_string)
		return (NULL);
	i = 0;
	while (ft_is_set(s1[i], set) && s1[i] != '\0')
		i++;
	while (!ft_is_set(s1[i], set) && s1[i] != '\0')
	{
		new_string[j] = s1[i];
		i++;
		j++;
	}
	k = i;
	i = ft_strlen(s1) - 1;
	while (ft_is_set(s1[i], set) && i >= 0)
		i--;
	while (k <= i && s1[k] != '\0')
	{
		new_string[j] = s1[k];
		j++;
		k++;
	}
	return (new_string);
}

#include <stdio.h>

int	main(void)
{

	char *string = "      ";
	char *n_string;

	n_string = ft_strtrim(string, " ");

	printf("%s\n", n_string);
	free(n_string);
	return (0);
}
