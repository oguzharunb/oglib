#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char str1[] = "hello";
	char dest[31];
	printf("dest: %s\n", dest);
	printf("src : %s\n", str1);
	og_memcpy(dest, str1, sizeof(str1));
	printf("Memory coppied!\n");
	printf("dest: %s\n", dest);
	printf("src : %s\n", str1);
	return (0);
}
