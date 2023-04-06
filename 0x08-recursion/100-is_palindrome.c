#include "main.h"
int _palindrome_finder(char *s, int start, int end);
/**
*is_palindrome - check if a string is palindrome
*
*@s: pointer to input string
*
* Return: 1 if palindrom else 0
*
**/
int is_palindrome(char *s)
{
	int len  = _strlen_recursion(s);

	if (len == 0)
	{
		return (1);
	}
	return (_palindrome_finder(s, 0, len - 1));
}
/**
*_strlen_recursion - returns the length of a string
*
*@s: pointer to input string character
*
* Return: length of the string
*
**/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
*_palindrome_finder - helps to find palindrome string
*@s:pointer to string input
*@start: start of string input
*@end: end of strig input
*Return: 1 if palindrom else 0
*
**/
int _palindrome_finder(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (_palindrome_finder(s, start + 1, end - 1));
	}
	return (0);
}
