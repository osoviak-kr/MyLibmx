#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
    int new_length;
    int counter = 0;
    int i = 0;
    char *newstr;

    if(!str || !sub || !replace)
        return NULL;
    counter = mx_count_substr(str, sub);
    new_length = mx_strlen(str) - mx_strlen(sub) * counter + mx_strlen(replace) * counter;
    newstr = mx_strnew(new_length);
    for(int j = 0; str[j];) {
        if(mx_strncmp(&str[j], sub, mx_strlen(sub)) == 0) {
            mx_strcat(newstr, replace);
            i += mx_strlen(replace);
            j += mx_strlen(sub);
        }
        else
            newstr[i++] = str[j++];
    }
    return newstr;
}
