#include "oglib.h"

void	*og_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	ptr1 = (char *)dest;
	ptr2 = (char *)src;
	i = -1;
	while(++i < n)
		ptr1[i] = ptr2[i];
	return (ptr1);
}

