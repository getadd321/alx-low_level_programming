#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates n bytes of a s2 to s1
 * @s1: input string1
 * @s2: input string2
 * @n: number of bytes ro concatinate
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	result = malloc((len1 + n + 1) * sizeof(char);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
