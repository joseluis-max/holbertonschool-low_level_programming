#include "holberton.h"
#include <stddef.h>
/**
 * _strstr - first occurrence of substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beggining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
