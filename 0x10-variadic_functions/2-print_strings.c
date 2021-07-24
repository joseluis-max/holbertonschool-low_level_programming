#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings - prints strings followed by a new line.
 * @separator: string between the others string.
 * @n: number of string
 * @...: other paramers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (n != 0)
		va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(arg, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(arg, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
