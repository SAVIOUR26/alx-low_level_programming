#include "main.h"

/**
*	flip_bits - counts no. of bits 2 change
*	2 get from 1 no. to another
*	@n: 1 st no.
*	@m: 2 nd no.
*
*	Return: no.of bits 2 change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i; if (current & 1)
count++;
}

return (count);
}

