#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints last digit of a value
 * @a: value to get last digit of
 *
 * Return: return the last digit
 */
int print_last_digit(int a)
{
	int b;

	if (a == INT_MIN)
	{
		b = 8;
		_putchar('0' + b);
		return (b);
	}
	else if (a < 0)
	{
		a = -a;
	}
	b = a % 10;
	_putchar('0' + b);
	return (b);
}
