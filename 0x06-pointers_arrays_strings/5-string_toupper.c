#include "main.h"

/**
 * string_toupper - converts string to upper
 * Description: takes in a string  pointer as an arg,
 * assign to new variable to keep track of change
 * loops through string replacing lowercase letter with upper,
 * depending on ascii value
 * @str: string to be converted
 * Return: original str
 */
char *string_toupper(char *str)
{
	char *original_str = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}

	return (original_str);
}
