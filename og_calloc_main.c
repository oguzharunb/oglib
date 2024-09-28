#include "../oglib.h"

#include <stdio.h>
int	main(void)
{
	int	*tab;
	int	i = -1;

	tab = og_calloc(5, sizeof(int));
	if (tab == NULL)
		return (1);
	tab[0] = 1;
	tab[1] = 3;
	tab[2] = 5;
	tab[3] = 7;
	tab[4] = 9;
	while(++i < 5)
		printf("tab[%i] = %i\n", i, tab[i]);
	return (0);
}
