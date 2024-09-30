#include "oglib.h"

void	og_putstr_fd(char *s, int fd)
{
	og_write(fd, s, og_strlen(s));
}

