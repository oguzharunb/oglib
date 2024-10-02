#include "oglib.h"

void	og_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = og_lstlast(*lst);
	last->next = new;
}
