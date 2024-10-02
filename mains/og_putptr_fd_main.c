#include "../oglib.h"

int	main(void)
{
	char	c1 = 'a';

	og_putptr_fd((unsigned long long)&c1, 1);
	og_putchar_fd('\n', 1);
	return (0);
}
