#include "holberton.h"
#include <stdio.h>
/**
 * whatsmyname - return the name of the program
 * argc: length of arguments
 * arfv: vector with the arguments
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}	
