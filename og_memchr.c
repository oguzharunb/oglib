#include "oglib.h"

void	*og_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*tmp_s;
	unsigned char	tmp_c;

	tmp_s = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	i = -1;
	while(++i < n)
	{
		if(tmp_s[i] == tmp_c)
			return (tmp_s + i);
	}
	return (NULL);
}
