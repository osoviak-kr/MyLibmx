#include "libmx.h"

void *mx_memset(void *b, int c, size_t len)
{
    unsigned char *str = b;

    if(b && len > 0)
        for(size_t i = 0; i < len; i++)
            str[i] = c;
    return b;
}

