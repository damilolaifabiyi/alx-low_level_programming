#include "main.h"

/**
 * main - Entry point
 * Description: a fuction that checks for lower case
 * return: 1 for success or 0 for fail
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
