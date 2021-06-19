#include <stdio.h>
/**
 * main - Numbers combination
 *
 * Return: 0;
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(',');
		i++;
	}
	putchar('\n');
	return (0);
}
