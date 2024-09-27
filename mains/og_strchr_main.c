#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello world";
	printf("str is: %s\n", str);
	char inp = 'w';
	char *ret = og_strchr(str, inp);
	printf("function applied with the input '%c'\n", inp);
	printf("char in returned pointer: %c\n", *ret);
	return (0);
}
