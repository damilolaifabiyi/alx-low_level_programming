#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search
 * @accept: array of bytes to search
 * Return: pointer to the byte in s that matches a byte of return NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x;

	while (*s != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (0);
}
