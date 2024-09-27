#include "../oglib.h"
#define BUF_SIZE 32

int	main(void)
{
	char	buf[BUF_SIZE];
	size_t	bytes;

	bytes = read(0, buf, BUF_SIZE);
	og_write(1, buf, bytes);
	return (0);
}
