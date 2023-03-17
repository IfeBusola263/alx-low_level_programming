#include <stdio.h>

/**
 * main - This is the main program
 *
 * Description: Prints the sizeof memory
 *
 * Return: always 0
 */


int main(void)
{
	char c;
	int i;
	long int j;
	long long int k;
	float f;

	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s).\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s).\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s).\n", (unsigned long)sizeof(f));

	return (0);
}
