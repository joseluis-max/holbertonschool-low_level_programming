#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
