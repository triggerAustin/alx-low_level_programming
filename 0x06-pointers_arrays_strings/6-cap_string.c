#include "main.h"
#include <stdio.h>

/**
 * cap_string - converts the first letter of each word to cap
 * Description: it takes a string and converts every letter
 * after a space
 * or period or escape character into a cap letter
 * @str: string to be capitalized
 * Return: the string
 */
char *cap_string(char *str)
{
	char *org_str = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i] -= 32;
			}
		}

		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
				|| str[i] == '\"' || str[i] == '\''
				|| str[i] == '\0' || str[i] == '\?')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}


		if (str[i] == '.' || str[i] == ' ')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;

			}
		}
	}

	return (org_str);
}
