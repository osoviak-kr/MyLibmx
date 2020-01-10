#include "libmx.h"

static int getlen(int x)
{
    int length = 1;
    
    while(x /= 10)
    {
        length++;
    }
    return length;
}

char *mx_itoa(int number)
{
    char *min;
    int len = getlen(number);
    char *arr = mx_strnew(len);
    unsigned int n_number = number;

    if(number == -2147483648) {
        min = "-2147483648";
        return min;
    }
    if(number < 0) {
        n_number = -number;
        len++;
        arr[0] = '-';
    }
    arr[--len] = n_number % 10 + '0';
    while(n_number /= 10)
        arr[--len] = n_number % 10 + '0';
    return arr;
}
