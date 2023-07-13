#include "main.h"

/**
*	clear_bit – bit value set to 0
*	@n: pointer 2 no. changes
*	@index: clears index of the bit 
*
*	Return: success 1, failure -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n); return (1);
}
 

