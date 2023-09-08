#include <stdio.h>

/**
 * main - start of program
 * @void: main return type
 *
 * Description: prints hexadecimal num
 * Return: 0 if run successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}

	putchar('\n');

	return (0);
}
