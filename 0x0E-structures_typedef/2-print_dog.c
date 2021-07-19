#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print in screen dog items
 * @d: pointer to struct dog
 * Return;
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", "(nil)");
		}
		if (d->age)
		{
			printf("Age: %.6f\n", d->age);
		}
		else
		{
			printf("Age: %s\n", "(nil)");
		} 
		if (d->owner)
		{
			printf("Owner %s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", "(nil)");
		}
	}
}
