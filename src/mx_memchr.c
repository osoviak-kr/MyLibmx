#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n)
{
    char *pup = (char *)s;

    for(size_t i = 0; i < n; i++, pup++)
        if(*pup == c)
            return (void *)pup;
    return NULL;
}
