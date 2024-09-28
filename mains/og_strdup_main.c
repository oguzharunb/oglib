#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello world";
	char	*new_str;
	printf("str is: %s\n", str);
	new_str = og_strdup(str);
	if (!new_str)
	{
		printf("Error: Memory couldnt be allocated!\n");
		return (1);
	}
	printf("str duplicated as new_str!\n");
	printf("new_str: %s\n", new_str);
	return (0);
}
