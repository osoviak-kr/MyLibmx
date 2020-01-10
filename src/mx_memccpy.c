#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    unsigned char *dt = dst;
    const char *sc = src;
    
    for(size_t i = 0; i < n; i++) {
        if(sc[i] == c) {
            dt[i] = sc[i];
            return dst;    
        }
        dt[i] = sc[i];
    }
    return dst;
}
