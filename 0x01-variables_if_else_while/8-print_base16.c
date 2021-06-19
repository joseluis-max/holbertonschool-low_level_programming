#include <stdio.h>
/**
 * main - Numbers base16
 *
 * Return: 0;
 */
int main(void)
{
	int i = 47;
	int j = 96;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
