#include "oglib.h"

int	og_atoi(const char *nptr)
{
	size_t	i;
	char	sign;
	int	ret;

	ret = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] == ' ' || nptr[i] == '\t') && nptr[i])
		i++;
	if (nptr[i] && (nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while ((nptr[i] >= '0' || nptr[i] <= '9') && nptr[i])
	{
		ret *= 10;
		ret += nptr[i] - '0';
		i++;
	}
	return (ret * sign);
}
