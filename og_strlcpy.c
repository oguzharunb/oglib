#include "oglib.h"

size_t	og_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = og_strlen(src);
	while(i < srclen && i < size - 1)
	{
		dest[i] = src[i];	
		i++;
	}
	dest[i] = 0;
	return (srclen);
}
