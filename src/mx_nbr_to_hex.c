#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr)
{
    char *hex;
    int temp = 0;
    short len_hex = 0;

    for(unsigned long a = nbr; a > 0; a /= 16, len_hex++);
    hex = mx_strnew(len_hex);
    for(int j = len_hex - 1; j >= 0; j--) {
        temp = nbr % 16;
        if(temp < 10)
            hex[j] = temp + 48;
        else
            hex[j] = temp + 87;
        nbr = nbr / 16;
    }
    return hex;
}
