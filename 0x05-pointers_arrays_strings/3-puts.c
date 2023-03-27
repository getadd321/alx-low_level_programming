/**
 * _puts - prints string to stdout
 *
 *@str:input string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');

}
