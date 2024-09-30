#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello world";
	printf("actual string: \"%s\"\n", str);
	char **list = og_split(str, ' ');
	while(*list)
	{
		printf("value: \"%s\"\n", *list);
		list++;
	}
	return (0);
}
