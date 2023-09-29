#include <stdio.h>

/**
 * main - prints number of args in a program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	unsigned int i, j;
	int count;

	j = argc;

	for (i = 0; i < j && *argv[i] != '\0'; i++)
	{
		count++;
	}
	printf("%d\n", count - 1);
	return (0);
}
