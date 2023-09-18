#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	if (s != NULL)
	{

		while (s[length] != '\0')
		{
			length++;
		}


		end = length - 1;

		while (start < end)
		{

			temp = s[start];
			s[start] = s[end];
			s[end] = temp;


			start++;
			end--;
		}
	}
}

