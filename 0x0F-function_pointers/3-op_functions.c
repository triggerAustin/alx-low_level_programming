#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two ints
 * @a: first int
 * @b: second int
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int
 * @b: second in
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 * Return: returns a/b
 */
int op_div(int a, int b)
{
	int div;

	div = 0;

	if (b != 0)
	{
		div = (a /b);
	}
	else
	{
		printf("ERROR\n");
		exit(100);
	}
	return (div);
}

/**
 * op_mod - gets the modulous of two ints
 * @a: first int
 * @b: second int
 * Return: return modulous of a and b
 */
int op_mod(int a, int b)
{
	int mod;

	mod = 0;

	if (b != 0)
	{
		mod = (a % b);
	}
	else
	{
		printf("ERROR\n");
		exit(100);
	}
	return (mod);
}
