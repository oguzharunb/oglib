#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	int	c1 = 'a';
	int	c2 = '4';
	int	c3 = '%';
	printf("c1 is: %c\n", c1);
	printf("c2 is: %c\n", c2);
	printf("c3 is: %c\n", c3);
	int	ret1 = og_isalnum(c1);
	int	ret2 = og_isalnum(c2);
	int	ret3 = og_isalnum(c3);
	printf("ret1 is 0: %i\n", ret1 == 0);
	printf("ret2 is 0: %i\n", ret2 == 0);
	printf("ret3 is 0: %i\n", ret3 == 0);
	return (0);
}
