#include "oglib.h"

void *og_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp_dest;
	char	*temp_src;

	temp_dest = (char *)dest;
	temp_src = (char *)src;
	i = -1;
	if(temp_dest >= temp_src)
	{
		while(++i < n)
			temp_dest[n - i - 1] = temp_src[n - i - 1];
	}
	else
	{
		while(++i < n)
			temp_dest[i] = temp_src[i];
	}
	return (dest);
}
