#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: number to be printed from to 98
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);

			}
		}

	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);

			}
		}

	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
