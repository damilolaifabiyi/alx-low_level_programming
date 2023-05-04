#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @k: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */
char *cap_string(char *k)
{
	int x, y;
	char z[] = " \t\n,;.!?\"(){}";

	x = 1;
	if (k[0] >= 'a' && k[0] <= 'z')
		k[0] -= ('a' - 'A');
	while (k[x] != '\0')
	{
		for (y = 0; z[y] != '\0'; y++)
			if (k[x - 1] == z[y] && (k[x] >= 'a' && k[x] <= 'z'))
				k[x] -= ('a' - 'A');
		x++;
	}
	return (k);
}
