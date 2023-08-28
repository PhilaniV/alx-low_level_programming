#include "lists.h"

/**
 * free_listint - funct frees linked list from memory
 * @head: list hd
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
