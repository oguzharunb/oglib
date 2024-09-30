#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	int	number = -1234;
	printf("number as int: %i\n", number);
	char *string = og_itoa(number);
	printf("number as string: \"%s\"\n", string);
	return (0);
}
