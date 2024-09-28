#include "oglib.h"

char	*og_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*final_string;

	s1_len = og_strlen(s1);
	s2_len = og_strlen(s2);
	final_string = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!final_string)
		return (NULL);
	og_memcpy(final_string, s1, 5);
	og_memcpy(final_string + s1_len, s2, 5);
	final_string[s1_len + s2_len] = '\0';
	return (final_string);
}
