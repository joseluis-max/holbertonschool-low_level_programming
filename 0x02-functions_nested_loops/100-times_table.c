#include "holberton.h"
/**
 * print_times_table - times table
 * @n: range to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int j = 0;

	if (n > 15 || n < 0)
	{
		return;
	}
	while (j <= n)
	{
		int i = 0;
		while (i <= n){
			int r = i * j;
		       	
			if (r < 10)
			{
				_putchar(r + 48);
				if(i < n)
				{
					_putchar(44);
                                	_putchar(32);
                                	_putchar(32);
                                	_putchar(32);
				}
			}
			else if (r < 100)
			{
				_putchar(r / 10 + 48);
				_putchar(r % 10 + 48);
				 if(i < n)
                                {
                                        _putchar(44);
                                        _putchar(32);
                                        _putchar(32);
                                }

			}
			else if (r < 1000)
			{
				_putchar(r / 100 + 48);
				_putchar(48 + ((r / 10) % 10));
				_putchar(48 + (r % 10));
				 if(i < n)
                                {
                                        _putchar(44);
                                        _putchar(32);
                                }

			}
			else
			{
				_putchar(r / 1000 + 48);
				_putchar(48 + (r / 100) % 10);
				_putchar(48 + (r / 10) % 10);
				_putchar(48 + r % 10);
				_putchar(44);
				_putchar(32);
			}
			i++;	
		}
		j++;
		_putchar('\n');
	}
}

