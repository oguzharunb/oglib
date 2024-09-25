#include <stdio.h>
#include <string.h>

void *og_memset(void *s, int c, size_t n);

int     main(void)
{
        char 	arr[5];
        char 	arr2[5];
        int	i;

	og_memset(arr, 'c', sizeof(arr) / sizeof(*arr));
        memset(arr2, 'c', sizeof(arr2) / sizeof(*arr2));
        
	i = 0;
	while(i < 5)
	{
		printf("arr[%i] = %c\n", i, arr[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while(i < 5)
	{
		printf("arr[%i] = %c\n", i, arr2[i]);
		i++;
	}
        return (0);
}

