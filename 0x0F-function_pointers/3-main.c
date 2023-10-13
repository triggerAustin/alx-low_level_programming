#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - takes in cl arguments and passes them to 
 * get_op_func which returns a pointer to a fn
 * and then calls that function on the arguments
 * Return: results
 */
int main(int argc, char *argv[])
{
	int ans, (*fn)(int, int), n1, n2;

	if (argc == 4)
	{
		n1 = argv[1];
		n2 = argv[3];
		fn = get_op_func(argv[2]);
			
		if (fn != NULL)
		{
			ans = fn(atoi(n1), atoi(argv[n2]));
			printf("%d\n", ans);
		}
		else
		{
			printf("ERROR\n");
			exit(99);
		}
	}
	else
	{
		printf("ERROR\n");
		exit(98);
	}
	return (0);
}
