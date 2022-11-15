#ifndef DOG_H
#define DOG_H
/**
* struct dog - structure listing dog details
* @name: dog's name
* @owner: owner of the dog
* @age: dog's age
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
