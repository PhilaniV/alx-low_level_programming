#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const lst_t *h)
{
	const lst_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
