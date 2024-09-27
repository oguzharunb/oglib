#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello world";
	printf("str is: %s\n", str);
	char	c = 'o';
	char	*ret = og_strrchr(str, c);
	char	*ret2 = og_strchr(str, c);
	printf("from last applied with the input: %c\n", c);
	printf("index of the found: %li\n", ret - str);
	printf("from start applied with the input: %c\n", c);
	printf("index of the found: %li\n", ret2 - str);

	return (0);
}
