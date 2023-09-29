#include <stdio.h>

/**
 * main - prints all characters in a command
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
