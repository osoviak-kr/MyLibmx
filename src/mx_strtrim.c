#include "libmx.h"

char *mx_strtrim(const char *str)
{
    int front = 0;
    int i = 0;
    int length;
    char *newstr;

    if(!str)
        return NULL; 
    length = mx_strlen(str);
    for(; mx_isspace(str[front]); front++);
    for(; mx_isspace(str[length - 1]); length--);
    newstr = mx_strnew(length - front);
    for(i = 0; front < length; front++, i++)
        newstr[i] = str[front];
    return newstr;
}
