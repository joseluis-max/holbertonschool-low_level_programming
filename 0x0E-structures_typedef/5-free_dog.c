#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
