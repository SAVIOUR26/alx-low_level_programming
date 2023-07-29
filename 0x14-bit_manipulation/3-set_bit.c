#include "main.h"

/**
 * set_bit - this sets the value of a bit to 1 at the given index
 * @n: the decimal number passed by the pointer
 * @index: the index position to change, starting from 0
 * Return: 1 if it worked, -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
