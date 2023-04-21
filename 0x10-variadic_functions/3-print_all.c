#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
/**
* print_all- prints anything
* @format: list of types of arguments passed to the function
* Return: nothing
**/
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str;
	bool test;
	va_list arg_list;

	va_start(arg_list, format);
	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				break;
			case 'i':
				printf("%d", va_arg(arg_list, int));
				break;
			case 'f':
				printf("%f", va_arg(arg_list, double));
				break;
			case 's':
				str = va_arg(arg_list, char*);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		j++;
		test = format[j] == 'c' || format[j] == 'i' ||
			format[j] == 'f' || format[j] == 's';
		if (format[j] != '\0' && test)
			printf(", ");
	}
	printf("\n");
	va_end(arg_list);
}
