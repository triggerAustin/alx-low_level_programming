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
	int i;

	if (argc == 3)
	{
		for (i = 0; argv[1][i] != '\0'; i++)
		{
			if (!isdigit(argv[1][i]))
			{
				printf("ERROR\n");
				return (1);
			}
		}
		for (i = 0; argv[2][i] != '\0'; i++)
		{
			if (!isdigit(argv[2][i]))
			{
				printf("ERROR\n");
				return (1);
			}
		}
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
