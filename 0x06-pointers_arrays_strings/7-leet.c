#include "main.h"
#include "stdio.h"

/**
 * leet - prints leet value of char
 * Description: converts a,A,E,e,o,O,T,t,L,l into let counterparts
 * @str: string to convert to 1337
 *
 */
char *leet(char *str)
{
	int i;
	char *org_str = str;
	char leetmap[128};

	leetmap['a'] = '4';
	leetmap['A'] = '4';
	leetmap['e'] = '3';
	leetmap['E'] = '3';
	leetmap['o'] = '0';
	leetmap['O'] = '0';
	leetmap['l'] = '1';
	leetmap['L'] = '1';
	leetmap['t'] = '7';
	leetmap['T'] = '7';
	leetmap[' '] = ' ';


	for (i = 0; str[i] != '\0'; i++)
	{
		if (leetmap[(unsigned char) str[i]] != '\0')
		{
			str[i] = leetmap[(unsigned char) str[i]];
		}
		else
		{
			continue;
		}
	}

	return (org_str);
}
