#include <stdlib.h>
#include <stdio.h>

typedef	struct s_list
{
	int	x;
	int	y;
	struct s_list *next;
} t_list;

void	init_cell(t_list *list)
{
	(*list).x = 45;
	(*list).y = 67;
}

int	main(void)
{
	
	t_list jambon;
	
	init_cell(&jambon);

	printf("%d %d\n", jambon.x, jambon.y);
	return (0);
}
