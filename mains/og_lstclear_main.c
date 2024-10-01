#include "../oglib.h"

#include <stdio.h>

static void	deleter(void *content)
{
	*(char *)content = 0;
}

int	main(void)
{
	char	c1 = 'a';
	char	c2 = 'b';
	char	c3 = 'c';
	t_list	*node1 = og_lstnew(&c1);
	t_list	*node2 = og_lstnew(&c2);
	t_list	*node3 = og_lstnew(&c3);
	t_list	**list = &node1;
	og_lstadd_back(list, node2);	
	og_lstadd_back(list, node3);
	t_list	*temp = *list;
	while(temp)
	{
		printf("addr: %p, content: %c\n", temp, *(char *)temp->content);
		temp = temp->next;
	}
	og_lstclear(list, deleter);
	printf("\nwe actually deleted the whole list, so we cant visualize it directly.\n");
	printf("if you want to try, uncomment the test lines in the main file of this example.\n");
	/* none of those memories are accessible, because function deleted them.
	printf("addr: %p, content: %c\n", node1, *(char *)node1->content);
	printf("addr: %p, content: %c\n", node2, *(char *)node2->content);
	printf("addr: %p, content: %c\n", node3, *(char *)node3->content);
	*/
	return (0);
}
