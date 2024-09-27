#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	dest[30] = "hello world";
	char	src[] = "hi my friend";
	
	printf("dest: %s\n", dest);
	printf("src:  %s\n", src);
	og_strlcat(dest, src, sizeof(dest));
	printf("two strings have been concatenated!\n");
	printf("dest: %s\n", dest);
	printf("src:  %s\n", src);
	return (0);
}
