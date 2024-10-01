#include "oglib.h"

t_list	*og_lstlast(t_list *lst)
{
	while(lst->next)
		lst = lst->next;
	return (lst);
}
