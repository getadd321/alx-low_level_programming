#include "main.h"
/**
* _islower - Shows 1 if the input is a loower-case character.
*Another case shows 0
*
*@c: is a character
*
* Retern: 1 for lowercase
* Return: 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
	_putchar('\n');
}
