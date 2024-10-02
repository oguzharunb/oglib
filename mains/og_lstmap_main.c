#include "../oglib.h"
#include <stdio.h>
#include <stdlib.h>

static void *adder(void *content)
{
	char *new_content = malloc(sizeof(char));
	if (!new_content)
		return NULL;
	*new_content = *(char *)content + 1;
	return (void *)new_content;
}

static void deleter(void *content)
{
	free(content);  // Properly free the allocated memory
}

int main(void)
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
	t_list *new_list = og_lstmap(list, adder, deleter);
	if (!new_list)
		return (0);
	og_write(1, "original list: \n", 16);
	og_lstprint(list);
	og_write(1, "modified list: \n", 16);
	og_lstprint(new_list);
	return (0);
}

