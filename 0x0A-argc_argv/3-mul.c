#include <stdio.h>
#include <ctype.h>
/**
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 2 && isdigit(argv[1]) && isdigit(argv[2]))
	{
		printf("%d\n", (*argv[1]) * (*argv[2]));
	}
	else
	{
		printf("ERROR\n");
	}
	return (0);
}
