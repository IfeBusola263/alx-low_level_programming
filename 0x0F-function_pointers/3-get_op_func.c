#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - gets a specific operation
 * @s: takes address of the operation
 *
 * Return: returns an integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	/* iterate through the 2-array */
	i = 0;
	/* check if operator matches array first column */
	/*return second column's adjascent address */
	while (i < 4)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

