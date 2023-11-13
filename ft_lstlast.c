t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = ft_lstlast(*lst);
	if (!p)
		*lst = new;
	else
		p->next = new;
	new->next = NULL;
}
