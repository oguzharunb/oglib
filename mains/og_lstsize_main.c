#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	value1 = 'a';
	char	value2 = 'b';
	int	size = 0;
	t_list	*list = og_lstnew(&value1);
	t_list	*node1 = og_lstnew(&value2);
	og_lstadd_front(&list, node1);
	size = og_lstsize(list);
	t_list *dolastir = list;
	while(dolastir)
	{
		printf("node address: %p: %c\n", dolastir, *(char *)dolastir->content);
		dolastir = dolastir->next;
	}
	printf("total size: %i\n", size);
	return (0);
}
