#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: string one
 * @s2: string two
 * Desc ription: a function that compares two strings.
 * Return: the value of he string copared
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
