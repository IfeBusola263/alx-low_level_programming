#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * copy - Copies a string to another memory address
 * @dest: destimation address
 * @src: source of string(address)
 *
 * Return: returns a pointer to string
 */

char *copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * len - Gives length of string
 * @c: pointer to string
 *
 * Return: returns an integer
 */

int len(char *c)
{
	int i = 0;

	for (i = 0; c[i] != '\0';)
		i++;
	return (i);
}


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

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = malloc(len(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(len(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	copy(ptr->name, name);
	copy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
