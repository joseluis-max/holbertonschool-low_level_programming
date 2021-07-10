#include "holberton.h"
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: length of arguments
 * @argv: arguments vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argc - 1 < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", *argv[1] * *argv[2]);
	return (0);
}
