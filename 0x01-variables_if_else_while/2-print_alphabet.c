#include <stdio.h>

/**
 * main - start of program
 * @void: return type for main
 *
 * Description: prints all lower case alphabets
 * Return: 0 is run successfully
 */
int main(void)
{
	char c; /*initialize char c*/
	for (c = 'a'; c <= 'z'; c++)/* initialize char c to ascii a and increamnet until = to ascii z*/
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
