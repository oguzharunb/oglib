#include "oglib.h"

size_t	og_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	destlen;

	destlen = og_strlen(dest);
	srclen = og_strlen(src);
	i = 0;
	j = 0;
	while(dest[i] && i < size - 1)
		i++;
	while(src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (destlen + srclen);
}

