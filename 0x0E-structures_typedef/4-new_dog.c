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
	char *n;
	char *o;

	while (name[i])
		i++;
	while (owner[j])
		j++;
	n = malloc(sizeof(char) * i + 1);
	for (k = 0; k < i; k++)
		n[k] = name[k];
	n[k] = '\0';
	o = malloc(sizeof(char) * j + 1);
	for (l = 0; l < j; l++)
		o[l] = owner[l];
	o[l] = '\0';

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->*name = &n;
	dog->age = age;
	dog->*owner = &o;
	return (dog);
}
