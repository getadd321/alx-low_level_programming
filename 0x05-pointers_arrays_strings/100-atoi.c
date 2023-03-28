#include "main.h"
/**
 * _atoi - prints string to stdout in reverse
 *
 *@s: the input string
 *
 * Return: didit
 **/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		while (*s >= '0' && *s <= '9')
		{
			digit = 1;
			result = (result * 10) + (*s - '0');
			s++;
		}
		if (digit == 1)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
