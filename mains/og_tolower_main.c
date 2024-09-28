#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	int	c1 = 'r';
	int	c2 = 'F';
	printf("c1 is: %c\n", c1);
	printf("c2 is: %c\n", c2);
	int	ret1 = og_tolower(c1);
	int	ret2 = og_tolower(c2);
	printf("ret1 is: %c\n", ret1);
	printf("ret2 is: %c\n", ret2);
	return (0);
}
