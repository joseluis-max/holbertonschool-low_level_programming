#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - make a new struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0;
	int j = 0;
	int k;
	int l;

	while (name[i])
		i++;
	while (owner[j])
		j++;
	dog = malloc(sizeof(dog_t));
	dog->name = malloc(sizeof(char) * i + 1);
	if (dog->name == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];
	dog->owner = malloc(sizeof(char) * j + 1);
	if (dog->owner == NULL)
		return (NULL);
	for (l = 0; l < j; l++)
		dog->owner[l] = owner[l];
	if (dog == NULL)
		return (NULL);
	dog->age = age;
	return (dog);
}
