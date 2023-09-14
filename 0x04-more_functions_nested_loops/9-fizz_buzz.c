#include <stdio.h>

/**
 * main - start of program
 * @void: takes no argument.
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++) /*loop thorught th enumbers 1 to 100*/
	{
			/*check if i is multiple of 3 or 5*/
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
			/*check if multiple of 3*/
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
			/*check if multiple of 5*/
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
			/*print other numbers*/
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
