#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the last digit
 *
 * Return: 0;
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
	{
		printf("%s %i %s %i %s\n", "Last digit of", n, "is", ld,
		   "and is greater than 5");
	}
	else
	{
		if (ld < 6 && ld != 0)
		{
			printf("%s %i %s %i %s\n", "Last digit of", n, "is", ld,
		       "and is less than 6 and not 0");
		}
		else
		{
		  printf("%s %i %s %i %s\n", "Last digit of", n, "is", ld, "and is 0");
		}
	}
	return (0);
}
