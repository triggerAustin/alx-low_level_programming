#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n: integer value whose sig we don't know
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		a = 0;
		_putchar('0');
	}
	else
	{
		a = -1;
		_putchar('-');
	}
	return (a);
}
