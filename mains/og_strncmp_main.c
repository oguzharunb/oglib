#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str1[] = "hello world";
	char	str2[] = "helva world";

	printf("str1 is: %s\n", str1);
	printf("str2 is: %s\n", str2);
	
	size_t	inp1 = 3;
	size_t	inp2 = 6;
	int ret1 = og_strncmp(str1, str2, inp1);
	int ret2 = og_strncmp(str1, str2, inp2);
	printf("given value %li, returned %i\n", inp1, ret1);
	printf("given value %li, returned %i\n", inp2, ret2);
	return (0);
}
