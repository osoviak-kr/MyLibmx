#include "libmx.h"

void mx_pop_back(t_list **head)
{
    if(!head)
        return;

    t_list *temp = *head;
    if(temp && temp->next) {
        while(temp->next->next != NULL)
            temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
    else if(temp)
        mx_pop_front(&temp);
}
