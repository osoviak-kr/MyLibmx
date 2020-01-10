#include "libmx.h"

void mx_push_back(t_list **list, void *data)
{
    t_list *node;
    t_list *temp;

    if(!list)
        return;
    node = mx_create_node(data);
    temp = *list;
    if(node && temp) {
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = node;
    }
    else if(node)
        *list = node;
}
