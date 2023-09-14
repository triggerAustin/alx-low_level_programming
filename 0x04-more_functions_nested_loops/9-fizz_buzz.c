#include <stdio.h>
#include "main.h"

/**
 * main - start of program
 * fizz_buzz - prints numbers from 1 to 100
 * multiples of 3 as fizz
 * multiples of 5 as buzz
 * @void: takes no argument
 *
 * Return: 0 if success
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
