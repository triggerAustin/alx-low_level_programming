#include <stdio.h>

/**
 * main -  prints name of program
 * @argc: number of arguments to a program
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
