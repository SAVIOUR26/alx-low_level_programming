#include "main.h"
#include <stdio.h>
/**
 * clear_bit - this sets the value of the bit to 0 at the given index
 * @n: pointer to the decimal number to change
 * @index: the index position to change
 * Return: if it worked 1 & if an error -1 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
