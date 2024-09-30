#include "oglib.h"

void	og_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		og_write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		og_putchar_fd('-', fd);
		og_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		og_putnbr_fd(n / 10, fd);
		og_putnbr_fd(n % 10, fd);
	}
	else
	{
		og_putchar_fd(n + '0', fd);
	}
}
