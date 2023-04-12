#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks if the input is a digit
 * @c: The input
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(char *s)
{
	int i = 0;
	
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	} 
	return (1);
}
/**
 * str_len - checks string length
 * @s: input string
 * Return : string length
 */
int str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arumants
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int length, len1, len2, i, j = 0, digit1, digit2, carry, *result;
	char *num1, *num2;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || !_isdigit(num1) || !_isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = str_len(num1);
	len2 = str_len(num2);
	length = len1 + len2 + 1;
	result = malloc(length * sizeof(int));
	if (!result)
		return (1);
	for (i = 0; i < length; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{	digit1 = num1[len1] - '0';
		carry = 0;
		for (len2 = str_len(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			j = 1;
		if (j)
			_putchar(result[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

