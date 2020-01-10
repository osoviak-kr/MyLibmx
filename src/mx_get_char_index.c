#include "libmx.h"

int mx_get_char_index(const char *str, char c)
{
    int len = mx_strlen(str);
    
    if (!str)
        return -2;
    if (c)
    {
        for (int i = 0; i < len; i++)
        {
            if (str[i] == c)
            {
                return i;
            }
        }
    }
    return -1;
}
