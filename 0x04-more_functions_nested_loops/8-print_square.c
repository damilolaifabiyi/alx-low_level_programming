#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int w, o;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (w = 1; w <= size; w++)
	{
		_putchar('#');
		for (o = 2; o <= size; o++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
}
