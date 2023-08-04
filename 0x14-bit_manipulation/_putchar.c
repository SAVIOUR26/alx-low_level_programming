#include "main.h"
#include <unistd.h>
/**
*	_putchar – to write c to stdout
*	@c: 2 to print
*
*	Return: success = 1.
*	Error, -1 returned, and errno set suitably.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

