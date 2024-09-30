#include "../oglib.h"

int	main(void)
{
	char	str[] = "hello world\n";
	char	test[] = "function tested!\n";

	og_putstr_fd(str, 1);
	og_putstr_fd(test, 1);
	return (0);
}
