#include "main.h"

/**
 * _islower - Entry point
 * @c: characterto be checked
 * Description: a fuction that checks for lower case
 * Return: 1 for lowercase character or 0 for anything else.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
