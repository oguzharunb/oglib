#include "oglib.h"

void	og_putptr_fd(unsigned long long n, int fd)
{
	if (n > 15)
	{
		og_putptr_fd(n / 16, fd);
		og_putptr_fd(n % 16, fd);
	}
	else
	{
		og_putchar_fd("0123456789abcdef"[n], fd);
	}
}
