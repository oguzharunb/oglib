#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	int	c1 = 'c';
	int	c2 = '4';
	printf("c1 is: %c\n", c1);
	printf("c2 is: %c\n", c2);
	int	ret1 = og_isdigit(c1);
	int	ret2 = og_isdigit(c2);
	printf("ret1 is 0: %i\n", ret1 == 0);
	printf("ret2 is 0: %i\n", ret2 == 0);
	return (0);
}
