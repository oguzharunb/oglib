#include <stdio.h>
#include "oglib.h"

int	main(void)
{
	char str[] = "hello";
	og_bzero(str, sizeof(str));
	printf("%i", *(str + 0));
	printf("%i", *(str + 1));
	printf("%i", *(str + 2));
	printf("%i", *(str + 3));
	printf("%i", *(str + 4));
	printf("%i", *(str + 5));
	return (0);
}
