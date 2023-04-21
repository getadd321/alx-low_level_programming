#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all- prints anything
*
* @format: list of types of arguments passed to the function
*
* Return: nothing
**/
void print_all(const char * const format, ...)
{
	const char *p = format;
	char c, *s;
	int i;
	float f;
	va_list arg_list;

	va_start(arg_list, format);

	while (*p)
	{
		switch (*p)
		{
			case 'c':
				c = (char)va_arg(arg_list, int);
				printf("%c, ", c);
				break;
			case 'i':
				i = va_arg(arg_list, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = (float)va_arg(arg_list, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(arg_list, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		p++;
	}
	printf("\n");
	va_end(arg_list);
}
