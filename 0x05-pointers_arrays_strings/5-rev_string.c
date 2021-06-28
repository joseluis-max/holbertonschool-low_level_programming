#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string reverse
 */
void rev_string(char *s)
{
	int c = 0;
	int i;

	while (*(s + c) != '\0')
	{
		c++;
	}
	for (i = 0; i < c / 2; i++)
	{
		char tmp = *(s + ((c - 1) - i));

		*(s + ((c - 1) - i)) = *(s + i)
		* (s + i) = tmp;
	}
}
