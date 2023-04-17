#ifndef DOG_H
#define DOG_H

/**
 * struct dog - list of dog data
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Dog information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
