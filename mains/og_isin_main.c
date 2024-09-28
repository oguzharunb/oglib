#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	c1 = 'c';
	char	c2 = 'o';
	char	set[] = "hello world";
	printf("set: \"%s\"\n", set);
	printf("%c, is in set: %i\n", c1, og_isin(c1, set));
	printf("%c, is in set: %i\n", c2, og_isin(c2, set));
	return (0);
}
