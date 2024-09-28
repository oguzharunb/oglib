#include "oglib.h"

void	*og_calloc(size_t nelem, size_t elsize)
{
	size_t	i;
	char	*allocated;
	size_t	total_bytes;

	i = 0;
	total_bytes = nelem * elsize;
	allocated = malloc(total_bytes);
	if (allocated == NULL)
		return (NULL);
	while(i < nelem * elsize)
	{
		allocated[i] = 0;
		i++;
	}
	return (allocated);
}
