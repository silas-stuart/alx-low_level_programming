#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing a variable of a type struct dog
 * @d: pointer to struct dog
 * @name: name to be initialized
 * @age: age to be initializing
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
