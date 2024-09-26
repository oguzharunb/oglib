#include "oglib.h"

void	og_bzero(void *s, size_t n)
{
	while(--n > 0)
	{
		((char *)s)[n] = 0;
	}
	*(char *)s = 0;
}
