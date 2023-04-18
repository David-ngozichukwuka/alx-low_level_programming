#include "dog.h"
/**
 * init_dog - creates a structure of dog type
 * @name: pointer to dog name
 * @age: dog age
 * @d: pointer to the structure
 * @owner: pointer to the dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
