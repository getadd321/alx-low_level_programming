#include "main.h"
/**
* _isalpha - Shows 1 if the input is an alphabet.
*Another case shows 0
*
*@c: is a character
*
* Retern: 1 for lowercase
* Return: 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
	_putchar('\n');
}
