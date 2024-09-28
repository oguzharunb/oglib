#include "oglib.h"

int	og_isalnum(int c)
{
	if(og_isalpha(c) || og_isdigit(c))
		return (1);
	return (0);
}

