#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - takes in cl arguments and passes them to
 * get_op_func which returns a pointer to a fn
 * and then calls that function on the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: results
 */
int main(int argc, char *argv[])
{
	int (*fn)(int, int), n1, n2;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	fn = get_op_func(argv[2]);

	if (!fn)
	{
		printf("ERROR\n");
		exit(99);
	}
	if (!n2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", fn(n1, n2));
	return (0);
}
