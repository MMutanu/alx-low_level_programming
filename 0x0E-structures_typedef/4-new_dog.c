#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: pointer to a char for dog's name
 * @age: age of dog
 * @owner: pointer to a char for dog's owner
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *dg;

	dg = (dog_t *)malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	dg->name = malloc(nameLen * sizeof(dg->name));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		dg->name[i] = name[i];
	dg->age = age;
	dg->owner = malloc(ownerLen * sizeof(dg->owner));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		dg->owner[i] = owner[i];
	return (dg);
}
