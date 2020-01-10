#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n)
{
    char *ns1 = (char *)s1;
    char *ns2 = (char *)s2;

    for(size_t i = 0; i < n; i++)
    {
        if(ns1[i] != ns2[i])
        {
            return ns1[i] - ns2[i];
        }
    }
    return 0;
}
