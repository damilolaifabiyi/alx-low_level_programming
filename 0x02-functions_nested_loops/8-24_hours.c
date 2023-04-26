#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description : create a function
 * Return: ...
 */

void jack_bauer(void)
{
	int e, r, t, y;

	for (e = 0; e <= 2; e++)
	{
	for (r = 0; r <= 9; r++)
	{
	if ((e <= 1 && r <= 9) || (e <= 2 && r <= 3))
	{
	for (t = 0; t <= 5; t++)
	{
	for (y = 0; y <= 9; y++)
	{
	_putchar(e + '0');
	_putchar(r + '0');
	_putchar(58);
	_putchar(t + '0');
	_putchar(y + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
