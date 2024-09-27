#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello world";
	size_t	i = -1;

	while(++i < sizeof(str))
		printf("str[%.2li] = %c // pointer: %p\n", i, str[i], str + i);
	char *ret = og_memchr(str, 'w', sizeof(str));
	printf("og_memchr returned the value: %p\n", ret);
	return (0);
}
