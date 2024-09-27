#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char dest[15];
	char src[] = "hello world";

	og_memset(dest, 0, sizeof(dest));
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	og_strlcpy(dest, src, sizeof(dest));
	printf("src copied to dest!");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	return (0);
}
