#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char 	str[] = "hello world";
	size_t	len = og_strlen(str);
	printf("%s's len is: %li\n", str, len);
	return (0);
}
