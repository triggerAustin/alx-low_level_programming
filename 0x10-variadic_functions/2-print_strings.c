#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * Description - takes the arg and checks whether they are strings or ints and prints strings only
 * @separator: seperates the strings
 * @n: number of passed arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int flag, j;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n;)
	{
		str = va_arg(args, char *);

		for (j = 0; str[j] != '\0'; j++)
		{
			if (!isdigit(str[j]))
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%s", str);

			if (i < (n - 1) && separator != NULL)
			{
				printf("%s ", separator);
			}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
