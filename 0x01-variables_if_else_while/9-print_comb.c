#include <stdio.h>

/**
 * main - start of program
 * @void: return type of main
 *
 * Description: prints numbers o to 9
 * Return: o if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
		}
		else
		{
			continue;
		}
	}
	putchar('$');
	putchar('\n');
	return (0);
}
