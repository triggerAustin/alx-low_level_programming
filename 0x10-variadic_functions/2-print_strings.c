#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * Description - takes the arg and checks whether they are strings
 * or ints and prints strings only
 * @separator: seperates the strings
 * @n: number of passed arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int flag;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n;)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			flag = check(str);

			if (flag == 1)
			{
				printf("%s", str);

				if (i < (n - 1) && separator != NULL)
				{
					printf("%s ", separator);
				}
			}
		}
		else
		{
			printf("(nil)");

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

/**
 * check - checks whether values in a str are ints or strings
 * @s: string
 * Return: flag value
 */
int check(char *s)
{
	int k, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (!isdigit(s[j]))
		{
			k = 1;
		}
		else
		{
			k = 0;
			break;
		}
	}
	return (k);
}
