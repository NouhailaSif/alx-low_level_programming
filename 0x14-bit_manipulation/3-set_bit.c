#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to change
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{ /* Check if index is valid */
		return (-1);
	}

	*n |= (1ul << index); /* Set the bit at the given index */
	return (1);
}
