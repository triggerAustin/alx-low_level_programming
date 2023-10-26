#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary value to unsigned int
 * @b: pointer to a binary value
 * Return: 0 if b is NULL or isn't 1 | 0
 * else return converted b
 *
 * Description: check whether b is null if not
 * check each individual value in b
 * if value isn't 0 or 1 return 0
 * else shift check one bit to the left
 * then if value at x is 1 perform XOR on check and count
 * return count
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int check = 1;
	unsigned int count = 0;
	int i;

	if (b == NULL)
		return (0);

	x = 0;
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		count <<= 1;
		if (b[x] == '1')
			count ^= check;

		x++;
	}
	return (count);
}
