#include <stdio.h>
/**
 * main - start of programme
 * @void: return type main
 *
 * Description: first for loop through 0 to 8
 * inner loop throughplus 1
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
