#include "oglib.h"

static size_t	og_countwords(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**og_split(char const *s, char c)
{
	char		**lst;
	size_t		word_len;
	int		word;

	lst = (char **)malloc((og_countwords(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	word = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!og_strchr(s, c))
				word_len = og_strlen(s);
			else
				word_len = og_strchr(s, c) - s;
			lst[word++] = og_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[word] = '\0';
	return (lst);
}
