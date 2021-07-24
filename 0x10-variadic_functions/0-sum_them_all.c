#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum numbers of the params
 * @n: numbers of arguments
 * @...: all arguments
 * Return: sum them all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /* variable type va_list */
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	/*
	 * va_start
	 * macro called with two arguments
	 * @var type va_list
	 * @tha last argument named in the function
	 */
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += var_arg(ap, int);
	/*
	 * Retrieve an argument
	 * @type va_list
	 * @type of next argument passed to the function)
	 */

	va_end(ap); /* free a type va_list */
	return (sum);
}
