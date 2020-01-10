#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2)
{
    char *newstr;

    if(s1 && s2) {
        newstr = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        mx_strcpy(newstr, s1);
        mx_strcat(newstr, s2);
        return newstr;
    }
    if(s1 && !s2) {
        newstr = mx_strdup(s1);
        return newstr;
    }
    if(!s1 && s2) {
        newstr = mx_strdup(s2);
        return newstr;
    }
    return NULL;
}
