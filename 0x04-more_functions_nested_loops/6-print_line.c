#include "main.h"

/**
 * print_line - prints a straight line whose length is n
 * @n: length of line
 */
void print_line(int n)
{
	if (n <= 0)
	{

		_putchar('\n');
	}

	while (n >= 0)
	{
		_putchar('_');
		if (n == 0)
		{

			_putchar('\n');
		}
		n--;
	}
}
