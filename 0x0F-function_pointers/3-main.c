#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program entry point
 * @argc: counts number of arguments
 * @argv: hold items
 *
 * Return: returns an integer
 */

int main(int argc, char **argv)
{
	int first_operand, second_operand, outcome;
	char *operator;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_operand = atoi(argv[1]);
	second_operand = atoi(argv[3]);
	operator = argv[2];

	if (operator[0] != ("+" || "-" || "*" || "/" || "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator[0]  == ("/" || "%")) && (second_operand == 0))
	{
		printf("Error\n");
		exit(100);
	}

	outcome = 0;

	outcome = (operator[0] == '+') ? first_operand + second_operand :
		(operator[0] == '-') ? first_operand - second_operand :
		(operator[0] == '*') ? first_operand * second_operand :
		(operator[0] == '/') ? first_operand / second_operand :
		(operator[0] == '%') ? first_operand % second_operand :

		printf("%d\n", outcome);

	return (0);
}
