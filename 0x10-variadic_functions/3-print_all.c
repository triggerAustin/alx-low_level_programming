#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *wrd, *sepa = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(args, double));
					break;
				case 's':
					wrd = va_arg(args, char *);
					if (!wrd)
						wrd = "(nil)";
					printf("%s%s", sepa, wrd);
					break;
				default:
					i++;
					continue;
			}
			sepa = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
