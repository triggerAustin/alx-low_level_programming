#include "main.h"

/**
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int check;
	unsigned int size = sizeof(n) * 8;
	unsigned int count;
	unsigned int flag = 1;

	count = 0;
	while (count < size)
	{
		check = (n << 1);
		check >>= 1;
		if (n != check)
		{
			flag = 0;
			_putchar('0' + 1);
		}
		else if (!flag)
		{
			_putchar(0 + '0');
		}
		n <<=  1;
		count++;
	}
	if (flag == 1)
		_putchar(1 + '0');
}
