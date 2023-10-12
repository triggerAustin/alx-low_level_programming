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
	int value;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n;)
	{
		value = va_arg(args, int);

		if (isdigit(value))
		{
			printf("%d", value);

			if (i < (n - 1) && separator != NULL)
			{
				printf("%s ", separator);
			}
		}
		else
		{
			continue;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
