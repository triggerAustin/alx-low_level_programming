#include "main.h"

/**
 * get_bit - gets the bit at a specified index
 * @n: long int value
 * @index: index to check for bit
 * Return: the bit at n[index]
 *
 * Description: checks if index is out of bounds
 * left shifts value of check by index and assigns it to check
 * hte & bitwise operator checks which values are common
 * in check and n

 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check =  1;

	if (index > sizeof(n) * 8)
		return (-1);
	check <<= index;
	if (check &  n)
		return (1);
	else
		return (0);
}
