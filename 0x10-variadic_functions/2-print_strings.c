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
	char *str;

	if (n != 0)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(arg, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(arg);
	}
}
