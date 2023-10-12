#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - takes n number of args and sums
 * Description - n is the number of arguments present
 * var_list is a type to hold the arguments needed
 * var_start sets args to all values after n
 * va_arg is used to get each argument as an int
 * va_end clears all memory allocated to args
 * @n: number of arguments to be summed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);
	sum = 0;

	if (n == 0)
	{
		return (sum);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
	}

	va_end(args);
	return (sum);
}
