/**
 * _puts - prints string to stdout
 *
 *@str: the input string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');

}
