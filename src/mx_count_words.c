#include "libmx.h"

int mx_count_words(const char *str, char c)
{
    bool in_word = 0;
    int words_c = 0;

    if(!str)
        return -1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != c && in_word == 0)
            in_word = 1;
        else if(str[i] == c && in_word == 1) {
            in_word = 0;
            words_c++;
        }
    }
    return in_word ? words_c + 1 : words_c;
}
