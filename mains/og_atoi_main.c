#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "    -12";
	int	ret = og_atoi(str);
	printf("str is: \"%s\"\n", str);
	printf("returned value is: %i\n", ret);
	return (0);
}
