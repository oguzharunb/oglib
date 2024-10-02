#include "../oglib.h"

#include <stdio.h>
static void	show_byte(void *addr)
{
	printf("byte in addr: %c\n", *(char *)addr);
}

int	main(void)
{
	char	c1 = 'a';
	char	c2 = 'b';
	char	c3 = 'c';

	t_list	*node1 = og_lstnew(&c1);
	t_list	*node2 = og_lstnew(&c2);
	t_list	*node3 = og_lstnew(&c3);
	t_list	*list = NULL;
	og_lstadd_back(&list, node1);
	og_lstadd_back(&list, node2);
	og_lstadd_back(&list, node3);
	og_lstiter(list, show_byte);
	return (0);
}
