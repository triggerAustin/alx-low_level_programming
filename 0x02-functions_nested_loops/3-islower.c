#include "main.h"
/**
 *_islower - checks whether a value is lowercase
 *
 */
int _islower(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
