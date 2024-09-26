#ifndef OGLIB_H
# define OGLIB_H
# include <stddef.h>

void	*og_memset(void *s, int c, size_t n);
void	og_bzero(void *s, size_t n);
size_t	og_read(int fd, void *buf, size_t count);
size_t	og_write(int fd, void *buf, size_t count);
void	*og_memcpy(void *dest, const void *src, size_t n);

#endif
