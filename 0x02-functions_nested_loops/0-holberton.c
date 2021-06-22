#include "holberton.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char str[9] = "Holberton";

	while (i < 10)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
