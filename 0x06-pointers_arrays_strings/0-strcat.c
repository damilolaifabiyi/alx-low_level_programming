#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to the string to be concentrated
 * @src: a pointer to the source string
 * Decription: a function that concatenates two strings.
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
	;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
