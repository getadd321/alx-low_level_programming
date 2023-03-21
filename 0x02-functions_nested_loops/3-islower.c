#include "main.h"
/**
*_islower - print 1 if the input is a lower character
*
*Retern: 1 for lowercase 0 for other 
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
	_putchar('\n');
}
