#include "oglib.h"

void	og_putendl_fd(char *s, int fd)
{
	og_write(fd, s, og_strlen(s));
	og_putchar_fd('\n', fd);
}

