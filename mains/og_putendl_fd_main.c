#include "../oglib.h"

int	main(void)
{
	char	str[] = "hello world";
	char	test[] = "function tested!";

	og_putendl_fd(str, 1);
	og_putendl_fd(test, 1);
	return (0);
}
