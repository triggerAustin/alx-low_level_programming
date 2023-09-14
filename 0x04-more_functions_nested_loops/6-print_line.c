#include "main.h"

/**
 * print_line - prints a straight line whose length is n
 * @n: length of line
 */
void print_line(int n)
{
	if (n < 0)
	{

		_putchar('\n');
	}
	else
	{
		while (n >= 0)
		{
			if (n == 0)
			{

				_putchar('\n');
			}
			else
			{
				_putchar('_');
			}
			n--;
		}
	}
}
