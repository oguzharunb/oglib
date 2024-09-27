#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	char 	arr[10] = "hello";
	int	i;

	i = -1;
	while(++i < 10)
		printf("arr[%i] = %i\n", i, arr[i]);

	printf("----\n");
	og_memmove(arr, arr + 3, 5);
	printf("memory moved!\n");
	printf("----\n");
	i = -1;
	while(++i < 10)
		printf("arr[%i] = %.3i = %c\n", i, arr[i], arr[i]);	
	return (0);
}
