#include "../oglib.h"

int	main(void)
{
	int	number = 1234;
	og_putnbr_fd(number, 1);
	og_putchar_fd('\n', 1);
	return (0);
}
