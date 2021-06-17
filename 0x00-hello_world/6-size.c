#include <stdio.h>
/**
 * main - size of types
 *
 * Return: 0
 */
int main(void)
{
	printf("%s %ld %s\n", "Size of a char:", sizeof(char), "byte(s)");
	printf("%s %ld %s\n", "Size of a int:", sizeof(int)), "byte(s)";
	printf("%s %ld %s\n", "Size of a long int:", sizeof(long int), "byte(s)");
	printf("%s %ld %s\n", "Size of a long long int:",
	sizeof(long long int), "byte(s)");
	printf("%s %ld %s\n", "Size of a float:", sizeof(float), "byte(s)");
	return (0);
}
