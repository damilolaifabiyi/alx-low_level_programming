#include "main.h"

/**
 * print_last_digit - Entry point
 * @x: charater used
 * Description : create a function
 * Return: last digit
 */

int print_last_digit(int x)

{
	int lastdigit;

	lastdigit = x % 10;
	if (lastdigit < 0)
	{
	lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
