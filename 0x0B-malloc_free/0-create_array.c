#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates and initializes an array of chars with a char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars or null if fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
