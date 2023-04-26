#include "main.h"

/**
 * main - Entry point
 * Description : create a function
 * Return: a whole numer or 0
 */

int _abs(int a)

{
	if (a < 0)
	{
	int absolute;

	absolute = a * -1;
	return (absolute);
	}
	return (a);
}
