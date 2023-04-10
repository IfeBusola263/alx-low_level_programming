#include <stdio.h>

/**
 * main - This is the entry point
 * @argc: takes the count of arguments to the program
 * @argv: pointer to the strings passed to program
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
