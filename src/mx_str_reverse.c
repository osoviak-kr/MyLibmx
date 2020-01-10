#include "libmx.h"

void mx_str_reverse(char *s)
{
    int i;
    int len = mx_strlen(s) - 1;
    
    if(s)
    {
        for(i = 0; i < len; i++, len--)
        {
            mx_swap_char(&s[i], &s[len]);
        }
    }
}
