#include "oglib.h"

void	og_putchar_fd(char c, int fd)
{
	og_write(fd, &c, 1);
}
