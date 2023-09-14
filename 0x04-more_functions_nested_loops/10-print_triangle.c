#include "main.h"

/**
 * print_triangle - prints a triangle of size size
 * @size: size of traingle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < (size - i); j++)
		{
			_putchar(' ');
		}
		for (k = size; k > (size - i); k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
