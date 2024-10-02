#include "oglib.h"

void	og_lstprint(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		og_putstr_fd("addr: ", 1);
		og_putptr_fd((unsigned long long)lst, 1);
		og_putstr_fd(", content: ", 1);
		og_putchar_fd(* (char *)lst->content, 1);
		og_putchar_fd('\n', 1);
		lst = lst->next;
	}
}
