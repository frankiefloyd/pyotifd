typedef	struct	s_list
{
	void	*content;
	struct	s_list	*next;
}	t_list

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* -------------------------------------------------------------------

f : adresse de la fonction à appliquer sur une cellule de la liste,
f renvoie un pointeur vers void et prend en argument un 
pointeur vers void.

f s'applique sur le champ content de la cellule et renvoie un pointeur vers
le content modifié.

del : adresse de la fonction permettant de supprimer le content;

lst : adresse du pointeur vers un élément.

Itère sur la liste lst et applique la focntion 'f' et applique la fonction
f au champ content de chaque élément.

Crée une nouvelle liste resultant des applications successives
de 'f', la focntion del détruit le contenu d'un élément si nécessaire.

*/

#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*temp1;

	if (!lst)
		return (NULL);
	temp = (t_list *)malloc(sizeof(t_list));
	if (!temp)
		return (NULL);
	new = temp;
	while (lst->next)
	{
		temp->content = f(lst->content);
		temp->next = (t_list *)malloc(sizeof(t_list));
		if (!temp->next)
			return (NULL);
		del(lst->content);
		temp1 = lst->next);
		free(lst);
		lst = temp1;
	}
	temp->next = NULL;
	return (new);
}

		


	


		

