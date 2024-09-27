#include "../oglib.h"
#define BUF_SIZE 32

int	main(void)
{
	char	buf[BUF_SIZE];
	size_t	bytes;

	og_write(1, "give me an input: ", 19);	
	bytes = read(0, buf, BUF_SIZE);
	og_write(1, buf, bytes);
	return (0);
}
