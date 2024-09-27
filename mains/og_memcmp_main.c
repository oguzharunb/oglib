#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "helva";
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	int ret = og_memcmp(str1, str2, 5);
	printf("function returned the value: %i\n", ret);
	return (0);
}
