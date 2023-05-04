#include "main.h"
/**
 * leet - encodes a string.
 * @s: pointer of a string.
 * Description: a function that encodes a string into 1337.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *s)
{
	int x;
	int y;
	char l[] = "aAeEoOtTlL";
	char n[] = "43071";

	x = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; l[y] != '\0'; y++)
			if (s[x] == l[y])
				s[x] = n[y / 2];
	}
	return (s);
}
