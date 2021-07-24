#include "variadic_functions.h"
#include <stdarg.h>
/**
 * _print_char - print a character
 * @character: character for print
 */
void _print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * _print_integer - print a integer
 * @number: number for print
 */
void _print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * _print_float - print a float
 * @number: float for print
 */
void _print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * _print_string - print a string
 * @string:string for print
 */
void _print_string(va_list list)
{
	char *str = va_arg(list, char *);
	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
}
