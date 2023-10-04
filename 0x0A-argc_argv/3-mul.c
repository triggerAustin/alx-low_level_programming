#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - multiplies two arguments
 * @argv: argument vector
 * @argc: argument count
 * Return: 1 if error 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
