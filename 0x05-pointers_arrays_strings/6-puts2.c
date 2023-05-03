#include "main.h"

/**
 * puts2 - Print every chararacer of string.
 * @str: characters
 * Description: a fuction that prints every character of a string
 */
void puts2(char *str)
{
	int x = 0, n = 0;

	while (str[x++])
		n++;

	for (x = 0; x < n; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
