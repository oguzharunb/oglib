#include "oglib.h"

void	*og_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)dest;
	ptr2 = (char *)src;

	while(n-- > 0)
		ptr1[n] = ptr2[n];
	ptr1[n] = ptr2[n];
	return (ptr1);
}

