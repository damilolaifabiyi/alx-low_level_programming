#include "main.h"
/**
 * _strcpy - copies string pointed to by src
 * @dest:  pointer to  string
 * @src:  pointer to  buffer
 * Description: a function that copies the string pointed to by src
 * Return: the value of the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
