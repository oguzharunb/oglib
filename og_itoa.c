#include "oglib.h"

char	*og_itoa(int n)
{
	size_t	size;
	char	neg;
	int	temp_n;
	char	*new;	
	int	i;

	if (n == -2147483648)
	{
		new = og_strdup("-2147483648");
		if(!new)
			return (NULL);
		return (new);
	}
	neg = 0;
	size = 0;

	if(n < 0)
	{
		size++;
		n = -n;
		neg = 1;
	}
	temp_n = n;
	while(temp_n)
	{
		size++;
		temp_n /= 10;
	}
	new = (char *)malloc(sizeof(char) * (size + 1));
	new[size] = '\0';
	if (neg)
		*new = '-';
	i = 0;
	while(n)
	{
		new[size - i - 1] = '0' + (n % 10);
		n /= 10;
		i++;
	}
	return (new);
}
