#include "main.h"

/**
 * get_bit - val of a bit at a gvn index
 * @n: dcml parameter
 * @index: index
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
