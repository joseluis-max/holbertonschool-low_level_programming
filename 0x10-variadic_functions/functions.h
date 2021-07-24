#include "variadic_functions.h"
#include <stdarg.h>
/**
 * _print_char - print a character
 * @character: character for print
 */
void _print_char(va_list list)
{
	if (list != NULL)
		printf("%c", va_arg(list, int));
}
/**
 * _print_integer - print a integer
 * @number: number for print
 */
void _print_integer(va_list list)
{
	if (list != NULL)
		printf("%d", va_arg(list, int));
}
/**
 * _print_float - print a float
 * @number: float for print
 */
void _print_float(va_list list)
{
	if (list != NULL)
		printf("%f", va_arg(list, double));
}
/**
 * _print_string - print a string
 * @string:string for print
 */
void _print_string(va_list list)
{
	char *str = va_arg(list, char *);
	if (list != NULL)
	{
		if(str != NULL)
			printf("%s", str);
	}
	printf("(nil)");
}
