#include "libmx.h"

void *mx_realloc(void *ptr, size_t size)
{
    char *newptr;
    size_t oldsize;

    if(!ptr)
        return malloc(size);
    oldsize = malloc_size(ptr);
    if(size <= oldsize)
        return ptr;
    newptr = malloc(size);
    mx_memcpy(newptr, ptr, size);
    free(ptr);
    return newptr;
}
