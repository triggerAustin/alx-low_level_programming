#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_op_func - pointer to a function that calls
 * another funciton based on value of s
 * @s: operator
 * Return: a pointer to a function based on s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
