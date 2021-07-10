#include "holberton.h"
#include <stdio.h>
/**
 * main - print all arguments receives
 * @argc: length of arguments
 * @argv: arguments vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
