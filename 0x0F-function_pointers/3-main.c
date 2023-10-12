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
	int ans;
	int (*fn)(int, int);

	if (argc == 4)
	{
		fn = get_op_func(argv[2]);
			
		if (fn != NULL)
		{
			ans = fn(atoi(argv[1]), atoi(argv[3]));
			printf("%d\n", ans);
		}
	}
	else if (argc != 4)
	{
		printf("ERROR\n");
	}
	return (0);
}
