#include "main.h"
/**
* print_alphabet_x10 - prints alphabets in lower-case 10x
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
