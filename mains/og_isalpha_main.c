#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	int	c1 = 21;
	int	c2 = 'a';
	printf("c1 is: %c\n", c1);
	printf("c2 is: %c\n", c2);
	int	ret1 = og_isalpha(c1);
	int	ret2 = og_isalpha(c2);
	printf("ret1 is 0: %i\n", 0 == ret1);
	printf("ret2 is 0: %i\n", 0 == ret2);
	return (0);
}
