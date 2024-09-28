#include "oglib.h"

char	*og_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*allocated;

	allocated = malloc(sizeof(char) * (len + 1));
	if(!allocated)
		return (NULL);
	i = -1;
	while(++i < len)
		allocated[i] = s[start + i];
	allocated[i] = '\0';
	return (allocated);
}
