#include "oglib.h"

int	og_tolower(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}

