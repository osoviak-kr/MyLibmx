#include "libmx.h"

void mx_pop_front(t_list **head)
{
    if(!head)
        return;    
    t_list *temp = *head;
    if(head) {
        *head = (*head)->next;
        free(temp);
    }
}
