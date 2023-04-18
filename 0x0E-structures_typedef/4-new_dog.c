#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: first member
 * @age: second member
 * @owner: Third member
 *
 * Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	size_t i;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		for (i = 0; i < sizeof(dog_t); i++)
			free(((char *)ptr + i));
		return (NULL);
	}

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
