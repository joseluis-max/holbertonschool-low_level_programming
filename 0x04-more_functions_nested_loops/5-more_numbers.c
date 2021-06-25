#include "holberton.h"
/**
 * more_numbers - 10 times numbres 1 - 14
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			 _putchar(j / 10 + 48);
			if (j > 9)
			{
				_putchar(j % 10 + 48);
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
