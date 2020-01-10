#include "libmx.h"

bool cmp(void *a, void *b) {
    if (mx_strcmp( (char *)a, (char *)b ) > 0) {
        return true;
    }
    return false;
}

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *))
{
    t_list *j;
    t_list *i = lst;
    t_list *temp;

    for(i = lst; i != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(cmp(i->data, j->data) == 1) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    return lst;
}
