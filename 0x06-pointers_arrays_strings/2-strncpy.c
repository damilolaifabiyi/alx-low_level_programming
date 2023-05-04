#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: a pointer to the string to be concentrated
 * @src: a pointer to the source string
  * @n: number of bytes to copy
 * Decription: a function that copies a string
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
