#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: a pointer to the string to be concentrated
 * @src: a pointer to the source string
  * @n: number of bytes to print
 * Decription: a function that concatenates two strings.
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
