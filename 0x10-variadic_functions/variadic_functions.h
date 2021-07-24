#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#define _FUNCTIONS_H_
#include <stdio.h>
#include <stddef.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _print_char(va_list);
void _print_integer(va_list);
void _print_float(va_list);
void _print_string(va_list);
/**
 * struct type - content a type and a function pointer
 * @type: format's type
 * @print: function for print format
 */
typedef struct print_type
{
	char *type;
	void (*function)(va_list list);
} P_TYPE;

#endif
