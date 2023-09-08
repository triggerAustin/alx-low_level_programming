#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - start of programme
 * @void: main return type
 *
 * Description: it checks whether a number is negative or positive
 * Return: 0 if run successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n < 0)
	{
		printf("%d is negative", n);
	}else
	{
		printf("%d is positive", n);
	}
	return (0);
}
