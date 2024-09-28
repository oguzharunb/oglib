#include "oglib.h"

int	og_isin(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while(set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
