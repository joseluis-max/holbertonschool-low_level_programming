#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - positive_negative_zero
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0){
		printf("%i %s\n", n, "is positive");
	}else{
		if(n < 0){
			printf("%i %s\n", n, "is negative");
		}else{
			printf("%i %s\n", n, "is zero");
		}
	}
	return (0);
}
