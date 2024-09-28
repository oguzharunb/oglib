#include "oglib.h"

char	*og_strdup(const char *s)
{
	size_t	slen;
	size_t	i;
	char	*allocated;


	slen = og_strlen(s);
	allocated = malloc(sizeof(char) * (slen + 1));
	if(allocated == NULL)
		return (NULL);
	i = -1;
	while(++i < slen)
		allocated[i] = s[i];
	allocated[i] = '\0';
	return (allocated);
}

