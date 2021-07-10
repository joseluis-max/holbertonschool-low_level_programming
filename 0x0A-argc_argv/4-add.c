#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - sum numbers
 * @argc: length of arguments
 * @argv: arguments vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc - 1 == 0)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] < 48 && *argv[i] > 57)
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
