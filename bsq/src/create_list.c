#include "../inc/h.h"

t_list	*create_lisr(char *data, int size)
{
	t_list *new_list;
	if (!(new_list =(t_list *) malloc(sizeof(t_list))))
		return (NULL);
	new_list->size = size;
	new_list->data = data;
	return (new_list);
}
