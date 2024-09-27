#include "oglib.h"

char	*og_strchr(const char *s, int c)
{
	size_t	i;
	char	*temp_s;

	temp_s = (char *)s;
	i = 0;
	while(temp_s[i])
	{
		if(temp_s[i] == c)
			return (temp_s + i);
		i++;
	}
	if(temp_s[i] == c)
		return (temp_s + i);
	return (NULL);
}

