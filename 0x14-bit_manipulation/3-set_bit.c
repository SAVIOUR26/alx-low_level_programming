#include "main.h"

/**
*	set_bit - set bit at that index to 1
*	@n: pointer 2 no. 2 change
*	@index: bit index set to 1
*
*	Return: success 1, failure -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n); return (1);
}

