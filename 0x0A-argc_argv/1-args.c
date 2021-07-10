#include "holberton.h"
#include <stdio.h>
/**
 * main - length of arguments
 * @argc: length of arguments
 * @argv: arguments vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
