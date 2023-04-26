#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description : create an alphabet function that prints multiple times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int i = 1;

	while (i <= 10)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
	i++;
	}

}
