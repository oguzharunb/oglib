#include "oglib.h"

int	og_toupper(int c)
{
	if (c >= 'a' &&  c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

