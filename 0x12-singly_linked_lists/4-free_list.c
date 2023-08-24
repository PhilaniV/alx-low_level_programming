#include <stdlib.h>
#include "lists.h"

/**
 * free_lst - frees a linked list
 * @head: lst_t list to be freed
 */
void free_lst(lst_t *head)
{
	lst_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
