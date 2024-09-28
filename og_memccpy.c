#include "oglib.h"

void    *og_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t  i;
	unsigned char *temp1;
	unsigned char *temp2;

	temp1 = (unsigned char *)src;
	temp2 = (unsigned char *)dest;
	i = 0;
	while (i < n) 
	{
 		temp2[i] = temp1[i];
		if (temp1[i] == (unsigned char)c)
		{
			return (temp2 + i + 1);
		}
		i++;
	}
	return (NULL);
}
