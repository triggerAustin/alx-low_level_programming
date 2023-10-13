#include <stdio.h>
#include <ctype.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - prints all numbers separated by separator
 * @separator: separates the numbers
 * @n: number count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
	if (!separator)
		printf("%d", va_arg(args, int));
	else if (separator && i == 0)
		printf("%d", va_arg(args, int));
	else
		printf("%s%d", separator, va_arg(args, int));
	i++;
	}
	printf("\n");
	va_end(args);
}
