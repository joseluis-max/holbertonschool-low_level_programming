#include "dog.h"
#include <stddef.h>
/**
 * init_dog - init a dog structure
 * @d: dog new structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * return;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
