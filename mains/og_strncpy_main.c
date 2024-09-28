#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello world";
	char	dest[35];
	og_memset(dest, 0, sizeof(dest));
	printf("dest: %s\n", dest);
	printf("str:  %s\n", str);
	og_strncpy(dest, str, sizeof(dest));
	printf("after copying\n");
	printf("dest: %s\n", dest);
	printf("str:  %s\n", str);
	return (0);
}
