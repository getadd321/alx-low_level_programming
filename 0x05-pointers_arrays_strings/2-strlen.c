/**
 * _strlen - checks the length of string
 *
 *@s:input string
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (*s != '/0')
	{
		str_len++;
		s++;
	}
	return (str_len);

}
