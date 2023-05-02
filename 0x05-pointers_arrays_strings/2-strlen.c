#include "main.h"

/**
 * _strlen - print the legnth of the string
 * @s: pointer
 * Description: a fuction that returns the length of a spring
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	;
	return (x);
}
