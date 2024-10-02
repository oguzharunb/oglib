#include "oglib.h"


void	og_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while(lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
