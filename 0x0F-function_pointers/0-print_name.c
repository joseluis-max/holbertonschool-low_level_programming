#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print a name with a pointer function
 * @name: name for imprime
 * @f:pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
