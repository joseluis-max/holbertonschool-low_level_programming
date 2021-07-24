#include "variadic_functions.h"
#include "functions.h"
#include <stdarg.h>
/**
 * print_all - prints all followed by a new line.
 * @format: string format parameters.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *separator = "";
	va_list list;
	void (*printting)(va_list);
	P_TYPE print[] = {
		{"c", _print_char},
		{"i", _print_integer},
		{"f", _print_float},
		{"s", _print_string},
		{"NULL", NULL}
	};
	va_start(list, format);
	while (format[i])
	{
		while (print[j].type[0] == format[i])
		{
			if (print[j].type[0] == format[i])
			{
				printf("%s", separator);
				printting = print[j].function;
				printting(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
