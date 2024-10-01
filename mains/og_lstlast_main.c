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
	int	i = 1;
	while(dolastir)
	{
		printf("%i. node address: %p: %c\n", i, dolastir, *(char *)dolastir->content);
		dolastir = dolastir->next;
		i++;
	}
	t_list *last = og_lstlast(list);
	printf("**********\n");
	printf("last elements addr: %p, last elements content %c\n", last, *(char *)last->content);
	return (0);
}
