#include <stdio.h>
#include "dog.h"

/**
 * init_dog - to initialize dog struct
 *
 * @d: input pointer to struct dog
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL) /* validate if d initiated successfuly */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
