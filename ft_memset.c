#include <stdio.h>
void *ft_memset(void *ptr, int init_value, int size);
{
	unsigned char *p = (unsigned char *) ptr;
	unsigned char value = (unsigned  char)init_value;
	int	i;

	i = 0;

	while (i < size)
	{
		p[i] = init_value;
		i++;
	}
	return (ptr);
}





int main(void)
{
	int	a;
	int tab[12] = {1,2,3,4,5,6,7,8};
	a = 12;

	printf("taille tableau = %d\n", sizeof(tab));
	printf("taille element 1 du tableau = %d\n", sizeof(tab[1]));
	printf("taille a = %d\n", sizeof(a));
	mimset(tab);
	mimset(&a);

	return (0);
}

