#include "libmx.h"

static char **memory(const char *s, char c)
{
    int i = 0;
    int j = 0;
    int c_words = mx_count_words(s, c);
    int c_chars = 0;
    char **newstr = (char **)malloc(sizeof(char*) * c_words + 1);
    
    if(!s)
        return NULL;
    for(i = 0, j = 0; s[i]; i++) {
        if (s[i] != c) {
            c_chars = 0;
            for(; s[i] != c && s[i]; i++)
                c_chars++;
            newstr[j++] = mx_strnew(c_chars);
        }
    }
    return newstr;
}

char **mx_strsplit(const char *s, char c)
{
    int i = 0;
    int j = 0;
    int a = 0;
    char **str = memory(s, c);

    for(i = 0, j = 0; s[i]; i++) {
        if (s[i] != c) {
            for(a = 0; s[i] != c && s[i]; i++)
                str[j][a++] = s[i];
            j++;
        }
    }
    str[j] = NULL;
    return str;
}
