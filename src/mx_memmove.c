#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s = dst;
    
    mx_memcpy(s, src, len);
    mx_memcpy(dst, s, len);
    return dst;
}
