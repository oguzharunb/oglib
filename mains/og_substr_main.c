#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello world";
	printf("str is: \"%s\"\n", str);
	char	*new_str = og_substr(str, 3, 5);
	if(!new_str)
		return (1);
	printf("function applied with values 3, 5\n");
	printf("returned substring is \"%s\"\n", new_str);
	return (0);
}
