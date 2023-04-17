#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints information
 * @d: takes addrss of initialized variable
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
