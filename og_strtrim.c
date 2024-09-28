#include "oglib.h"

#include <stdio.h>
char	*og_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	i;
	size_t	final_size;
	char	*final_string;

	i = 0;
	s1_len = og_strlen(s1);
	while(i < s1_len && og_isin(s1[i], set))
	{
		printf("trimmed from beginning\n");	
		i++;
	}
	s1_len--;
	while(i <= s1_len && og_isin(s1[s1_len], set))
	{
		s1_len--;
		printf("trimmed from last\n");	
	}
	printf("i: %li, s1_len: %li\n", i, s1_len);
	final_size = (sizeof(char) * (s1_len - i + 2));
	final_string = malloc(final_size);
	if(!final_string)
		return (NULL);
	printf("final_size: %li\n", final_size);
	og_strncpy(final_string, s1 + i, final_size - 1);
	return (final_string);
}
