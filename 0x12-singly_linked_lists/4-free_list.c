#include <stdlib.h>
#include "lists.h"

/**
 * free_lst - this frees a linked list
 * @head: the lst_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
