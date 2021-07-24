#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_string - prints strings followed by a new line.
 * @separator: string between the others string.
 * @n: number of string
 * @...: other paramers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for(i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, unsigned int));
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
