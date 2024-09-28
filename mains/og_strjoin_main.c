#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "world";
	char	*new_str = og_strjoin(str1, str2);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	size_t i = -1;
	while (++i < 11)
		printf("%c %i\n", new_str[i], new_str[i]);
	return (0);
}
