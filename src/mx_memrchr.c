#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n)
{
    char *ptr = (char *)s;

    for(size_t i = 0; i < n; i++, ptr++);
    for(size_t i = 0; i < n; i++, ptr--)
        if(*ptr == c)
            return (void *)ptr;
    return NULL;
}
