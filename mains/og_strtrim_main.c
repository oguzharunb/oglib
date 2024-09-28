#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "  hello world  ";
	printf("str: \"%s\"\n", str);
	char	*new_str = og_strtrim(str, " d");
	printf("function applied with input \" d\"!\n");
	printf("final str is: \"%s\"\n", new_str);
	return (0);
}
