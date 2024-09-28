#include "oglib.h"

int	og_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;

	i = 0;
	while(i < n && tmp1[i] && tmp2[i])
	{
		if(tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);	
		i++;
	}
	return (0);
}

