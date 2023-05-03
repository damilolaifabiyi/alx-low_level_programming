#include "main.h"

/**
 * rev_string - reverse a string
 * @s: array  type used
 * Description: a fuction to print reverse string
 */

void rev_string(char *s)
{
	int a, b, c;
	char d;

	for (a = 0; s[a] != '\0'; a++)
		;

	c = a;
	for (a--, b = 0; b < c / 2; a--, b++)
	{
		d = s[b];
		s[b] = s[a];
		s[a] = d;
}
}
