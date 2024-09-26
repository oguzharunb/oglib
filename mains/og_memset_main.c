#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello world";
	int	i;

	og_memset(str, 'c', 7);
	i = -1;
	while(++i < (int)sizeof(str))
		printf("str[%.2i] = %c = %i\n", i, (str[i] ? str[i] : '0'), str[i]);
	return (0);
}
