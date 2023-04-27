#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: input number of times to print '_'
 * Return: straight line
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');
		c++;
	}
		_putchar('\n');
}
