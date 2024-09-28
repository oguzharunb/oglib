#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	int	c1 = 25;
	int	c2 = 52;
	printf("c1 as char: %c, as int: %i\n", c1, c1);
	printf("c2 as char: %c, as int: %i\n", c2, c2);
	int	ret1 = og_isprint(c1);
	int	ret2 = og_isprint(c2);
	printf("ret1 is 0: %i\n", ret1 == 0);
	printf("ret2 is 0: %i\n", ret2 == 0);
	return (0);
}
