#include "oglib.h"

#include <stdio.h>
t_list	*og_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*iter_src;
	t_list	*iter_new;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	iter_src = lst;
	while(iter_src)
	{
		iter_new = og_lstnew(f(iter_src->content));
		if (!iter_new)
		{
			og_lstclear(&new_list, del);
			return (NULL);
		}
		og_lstadd_back(&new_list, iter_new);
		iter_src = iter_src->next;
	}
	return (new_list);
}
