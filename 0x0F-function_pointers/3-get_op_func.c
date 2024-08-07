#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: the operator selected
 *
 * Return: pointer to the function
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
	int m;

	m = 0;

	while (ops[m].op)
	{
		if (strcmp(ops[m].op, s) == 0)
			return (ops[m].f);
		m++;
	}

	return (NULL);
}
