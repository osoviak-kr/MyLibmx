#include "libmx.h"

void mx_del_strarr(char ***arr)
{
    int i = 0;
    char **array = *arr;
    
    if (*array == NULL || array == NULL)
        return;
    while (array[i] != NULL)
    {
        mx_strdel(&array[i]);
        i++;
    }
    free(*arr);
    *arr = NULL;
    arr = NULL;
}
