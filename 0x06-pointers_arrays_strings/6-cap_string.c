#include "main.h"
#include <stdio.h>

/**
 *
 */
char *cap_string(char *str)
{
	char *org_str = str;
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '.' || str[i] == ' ' || (str[i] >= 48 && str[i] <= 57))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
		else if (str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
	}

	return (org_str);
}
