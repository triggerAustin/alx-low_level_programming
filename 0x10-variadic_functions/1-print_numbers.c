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
	int l;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n;)
	{
		l = va_arg(args, int);

		printf("%d", l);

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s ", separator);
		}
		else if (i < (n - 1) && separator == NULL)
		{
			 printf(" ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
