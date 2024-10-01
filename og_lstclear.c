#include "oglib.h"

static void	loop(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst->next)
		loop(lst->next, del);
	del(lst->content);
	free(lst);
}

void	og_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	loop(*lst, del);
}
