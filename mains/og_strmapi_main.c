#include "../oglib.h"

#include <stdio.h>
static char	og_rot1(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

int	main(void)
{
	char	str[] = "hello world";
	char	*mapped = og_strmapi(str, og_rot1);
	if (!mapped)
	{
		printf("memory allocation failed!\n"); 
		return (1);
	}
	printf("default string: \"%s\"\n",str);
	printf("mapped string : \"%s\"\n",mapped);
	return (0);
}
