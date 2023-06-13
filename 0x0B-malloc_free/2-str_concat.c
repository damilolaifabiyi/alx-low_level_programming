#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *x;
	int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	x = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
	if (x == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (a + b + 1); c++)
	{
		if (c < a)
			x[c] = s1[c];
		else
			x[c] = s2[d++];
	}

	return (x);
}
