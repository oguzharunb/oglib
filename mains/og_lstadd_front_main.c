#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	value1 = 'a';
	char	value2 = 'b';
	t_list	*list = og_lstnew(&value1);
	t_list	*node1 = og_lstnew(&value2);
	og_lstadd_front(&list, node1);
	t_list *dolastir = list;
	while(dolastir)
	{
		printf("node address: %p: %c\n", dolastir, *(char *)dolastir->content);
		dolastir = dolastir->next;
	}
	return (0);
}
