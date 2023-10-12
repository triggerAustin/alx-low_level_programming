#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <ctype.h>

/**
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j, flag;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n;)
	{
		str = va_arg(args, char *);
		
		if (str != NULL)
		{
			for (j = 0; str[j] != '\0'; j++)
			{
				if (isdigit(str[j]))
				{
					break;
				}
				else
				{
					flag = 1;
				}
			}
			if (flag == 1)
				printf("%s", str);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
		}
		i++;
	}
	printf("\n");
}
