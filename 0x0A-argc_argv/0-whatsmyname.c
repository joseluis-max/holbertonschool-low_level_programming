#include "holberton.h"
#include <stdio.h>
/**
 * main - return the name of the program
 * @argc: length of arguments
 * @argv: vector with the arguments
 * Return: 0 succesfully or 1 error
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
