#include "main.h"


/**
 * _isalpha - Entry point
 * @c: character used
 * Description : create a function
 * Return: 1 for success or 0 for fail
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
