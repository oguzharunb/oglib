#include "../oglib.h"

#include <stdio.h>
void	deleter(void *content)
{
	*(char *)content = 0;
}

int	main(void)
{
	char	*c1 = malloc(sizeof(char));
	char	*c2 = malloc(sizeof(char));
	char	*c3 = malloc(sizeof(char));
	
	*c1 = 'a';
	*c2 = 'b';
	*c3 = 'c';

	t_list	*list = og_lstnew(c1);
	t_list	*node2 = og_lstnew(c2);
	t_list	*node3 = og_lstnew(c3);
	og_lstadd_back(&list, node2);
	og_lstadd_back(&list, node3);
	list->next = node2->next;
	og_lstdelone(node2, deleter);
	t_list	*loop = list;
	(void)deleter;

	while(loop)
	{
		printf("addr: %p, content: %c\n", loop, *(char *)loop->content);
		loop = loop->next;
	}
	return (0);
}
