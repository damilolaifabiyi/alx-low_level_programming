#include "main.h"

/**
 * _puts - print a string
 * @str: type of array
 * Description: a fuction to print strings
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
