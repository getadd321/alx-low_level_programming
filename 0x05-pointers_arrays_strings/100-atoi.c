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
			sign = -1;
		}
		else if (*s == '+')
		{
			sign = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = result * 10 + digit * sign;
		}
		else
		{
			break;
		}
		s++;
	}
	return (result);
}
