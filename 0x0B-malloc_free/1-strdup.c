#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *copy;
	int ix, n;

	if (str == NULL)
		return (NULL);

	for (ix = 0; str[ix]; ix++)
		n++;
	copy = malloc(sizeof(char) * (n + 1));

	if (copy == NULL)
		return (NULL);

	for (ix = 0; str[ix]; ix++)
	{
		copy[ix] = str[ix];
	}

	copy[n] = '\0';

	return (copy);

}
