#include "oglib.h"


void    *og_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t  i;
    unsigned char *temp1;
    unsigned char *temp2;

    // Cast src and dest to unsigned char* for byte-by-byte copy
    temp1 = (unsigned char *)src;
    temp2 = (unsigned char *)dest;

    for (i = 0; i < n; i++)
    {
        temp2[i] = temp1[i];

        // If the character matches, return the next byte position
        if (temp1[i] == (unsigned char)c)
        {
            return (temp2 + i + 1);
        }
    }

    // If c is not found, return NULL
    return NULL;
}
