#include <stdio.h>
/**
 * main - Alphabet
 *
 * Return: 0;
 */
int main(void)
{	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		if (i != 101 || i != 113)
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
