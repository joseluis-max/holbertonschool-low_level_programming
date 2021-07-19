#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: info about a dog's object
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *dog, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
