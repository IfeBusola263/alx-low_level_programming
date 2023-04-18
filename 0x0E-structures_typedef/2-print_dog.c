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
	char *error = "(nil)";

	if (d == NULL)
		return;
	else if (d->name == NULL && d->owner == NULL)
	{
		printf("Name: %s\n", error);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", error);
	}
	else if (d->name == NULL)
	{
		printf("Name: %s\n", error);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (d->age == 0.0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %s\n", error);
		printf("Owner: %s\n", d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", error);
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
