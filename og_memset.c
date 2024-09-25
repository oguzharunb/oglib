#include "libft.h"

void	*og_memset(void *s, int c, size_t n)
{
	while(n > 0)
	{
		((char *)s)[n - 1] = c;
		n--;
	}
	return (s);
}
