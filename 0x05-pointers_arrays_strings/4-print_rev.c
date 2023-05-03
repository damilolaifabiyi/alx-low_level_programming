# include "main.h"

/**
 * print_rev - string print in reverse
 * @s: array used
 * Description: a fuction to print strings in reverse
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		x++;
	}
	for (x--; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');

}
