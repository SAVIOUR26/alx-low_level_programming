#include "main.h"

/**
*	get_endianness – to check if a machine is little | big endian
*	Return: 0 - big, 1 - little
*/
int get_endianness(void)
{
unsigned int i = 1; char *c = (char *) &i;

return (*c);
}

