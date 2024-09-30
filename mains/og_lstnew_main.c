#include "../oglib.h"

int	main(void)
{
	char	value = 'a';
	t_list	*list = og_lstnew(&value);
	og_putchar_fd(*(char *)(list->content), 1);
	og_putchar_fd('\n', 1);
	return (0);
}
