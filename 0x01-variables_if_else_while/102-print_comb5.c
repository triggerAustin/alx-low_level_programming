#include <stdio.h>

/**
 * main- start of program
 * @void: return type main
 *
 * Description: returns values 0 99
 * Return: 0 if success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int tens_i = i / 10;
			int ones_i = i % 10;
			int tens_j = j / 10;
			int ones_j = j % 10;

			putchar('0' + tens_i);
			putchar('0' + ones_i);
			putchar(' ');
			putchar('0' + tens_j);
			putchar('0' + ones_j);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
