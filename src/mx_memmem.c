#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
    char * p_big = (char *)big;

    if(big_len < little_len || big_len == 0 || little_len == 0)
        return NULL;

    for(size_t i = 0; i < big_len; i++, p_big++)
    {
        if(mx_memcmp(p_big, little, little_len) == 0)
        {
            return (void *)p_big;
        }
    }
    return NULL;
}
