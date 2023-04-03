#include "main.h"
/**
 * _strstr - search matching string in the isubstring
 * @haystack: pointer to string input
 * @needle: pointer to vsubstring input
 * Return: pointer to the start of matching substring
 **/
char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;

	if (!needle)
	{
		return (haystack);
	}
	while (*p1)
	{
		char *p1_start = p1;
		char *p2 = needle;

		while (*p1 && *p2 && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return (p1_start);
		}
		p1 = p1_start + 1;
	}

	return ('\0');
}
