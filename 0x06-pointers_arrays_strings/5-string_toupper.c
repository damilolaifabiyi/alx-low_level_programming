#include "main.h"
/**
 * string_toupper - Change  lowercase letters to uppercase
 * @c: string
 *Description: a fuction that changes all lowercase to uppercase
 * Return: the uppercase string
 */

char *string_toupper(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] > 96 && c[a] < 123)
		{
			c[a] -= 32;
		}
	}
	return (c);
}
