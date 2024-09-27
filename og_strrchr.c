#include "oglib.h"

char	*og_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	slen;
	char	*temp_s;

	temp_s = (char *)s;
	slen = og_strlen(temp_s);
	i = 0;
	while(i < slen + 1)
	{
		if(temp_s[slen - i] == c)
			return (temp_s + slen - i);
		i++;
	}
	return (NULL);
}
