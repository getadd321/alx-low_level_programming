#include "main.h"
/**
*infinite_add - adds two numbers.
*@n1: pointer to input num1
*@n2: pointer to input num2
*@r: pointer to buffer that stores result
*@size_r: buffer size
*Return: pointer to the result
**/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum, carry_digit = 0, i, j;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n2[len2] != '\0')
	{
		len2++;
	}

	if (len1 >= size_r || len2 >= size_r)
	{
		return (0);
	}
	r[size_r] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry_digit)
	{
		sum = carry_digit;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}

		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}

		carry_digit = sum / 10;
		r[size_r - 1] = (sum % 10) + '0';
		size_r--;

		if (size_r == 1 && (i >= 0 || j >= 0 || carry_digit))
		{
			return (0);
		}
	}
	return (r + size_r);
}
