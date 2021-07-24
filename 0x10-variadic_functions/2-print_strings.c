#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - prints strings followed by a new line.
 * @separator: string between the others string.
 * @n: number of string
 * @...: other paramers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for(i = 0; i < n; i++)
	{
		printf("%s", va_arg(arg, char *));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
