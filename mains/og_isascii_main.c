#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	int	c1 = 15;
	int	c2 = 129;
	printf("c1 is: %i in integer\n", c1);	
	printf("c2 is: %i in integer\n", c2);
	int	ret1 = og_isascii(c1);
	int	ret2 = og_isascii(c2);
	printf("ret1 is 0: %i\n", 0 == ret1);
	printf("ret2 is 0: %i\n", 0 == ret2);
	return (1);	
}
