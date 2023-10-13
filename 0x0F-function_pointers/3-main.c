#include "3-calc.h"

/**
 * main - a program that performs simple operations.
 * @argc: argc's number
 * @argv: argv argument
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int (*cal)(int, int), a1, a2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	cal = get_op_func(argv[2]);
	if (!cal)
	{
		printf("Error\n");
		exit(99);
	}
	if (!a2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", cal(a1, a2));
	return (0);
}
