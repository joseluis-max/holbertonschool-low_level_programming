#include "holberton.h"
#include <stdio.h>
/**
 * main - multiples fizz and buzz
 *
 * Return: always 0;
 */
int main(void)
{
	int n = 1;

	while (n < 101)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else if (n % 3 == 0 && n % 5 != 0)
		{
			printf("%s", "Fizz ");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			if (n < 100)
			{
				printf("%s", "Buzz ");
			}
			else
			{
				printf("%s", "Buzz");
			}
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
