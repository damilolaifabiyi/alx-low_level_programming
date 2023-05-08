#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to  be fill
 * @n: number of bytes to be fill
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
