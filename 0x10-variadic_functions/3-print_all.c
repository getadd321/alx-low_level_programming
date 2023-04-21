#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all- prints anything
* @format: list of types of arguments passed to the function
* Return: nothing
**/
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *spr = "";
	va_list arg_list;

	va_start(arg_list, format);
	if (format)
	{
		while (format[j] != '\0')
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", spr, va_arg(arg_list, int));
					break;
				case 'i':
					printf("%s%d", spr, va_arg(arg_list, int));
					break;
				case 'f':
					printf("%s%f", spr, va_arg(arg_list, double));
					break;
				case 's':
					str = va_arg(arg_list, char*);
					if (str != NULL)
						printf("%s%s", spr, str);
					else
						printf("(nil)");
					break;
				default:
					j++;
					continue;
			}
			spr = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(arg_list);
}
