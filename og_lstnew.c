#include "oglib.h"

t_list	*og_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list) * (1));
	if (!new_list)
		return (NULL);
	new_list->next = NULL;
	new_list->content = content;
	return (new_list);
}

