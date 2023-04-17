#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: address to variable
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
