#include "oglib.h"

size_t	og_read(int fd, void *buf, size_t count)
{
	unsigned long long ret;

	__asm__ volatile
	(	 
		"mov $0, %%rax;"        // sys_read corresponds to 0 in x86-64 Linux
		"mov %1, %%rdi;"        // move fd to rdi
		"mov %2, %%rsi;"        // move buffer to rsi
		"mov %3, %%rdx;"        // move count to rdx
		"syscall;"              // for these inputs run the syscall (in this case its sys_read)
		"mov %%rax, %0;"        // once the syscall completes the number of bytes read is stored in rax.
		: "=r" (ret)            // telling the assembler to store the value of rax into ret
		: "r" ((unsigned long long)fd), "r" ((unsigned long long)buf), "r" ((unsigned long long)count) // inputs are passed
		: "%rax", "%rdi", "%rsi", "%rdx"   // these are the registers that will be modified by the inline assembly
	);
	return ((size_t)ret);
}
