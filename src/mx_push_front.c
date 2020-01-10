#include "libmx.h"

void mx_push_front(t_list **list, void *data)
{
    t_list *node;

    if(!list)
        return;
    node = mx_create_node(data);
    if (node)
    {
        node->next = *list;
        *list = node;
    }
}
