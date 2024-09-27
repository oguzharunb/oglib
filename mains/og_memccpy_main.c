#include "../oglib.h"
#include <stdio.h>
#include <string.h>
int main() {
	char src[] = "Hello World!";
	char dest[20];  // Make sure dest has enough space for 'src'

	
	void *result = og_memccpy(dest, src, ',', strlen(src));

	if (result)
	{
		printf("Character found, destination buffer: %s\n", dest);
	}
	else
	{
		printf("Character not found, destination buffer: %s\n", dest);
	}

	return (0);
}
