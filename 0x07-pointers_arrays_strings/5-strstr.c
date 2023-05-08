#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to start of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *x, *y;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			x = haystack;
			y = needle;
			while (*y)
			{
			if (*haystack++ != *y++)
			{	
				haystack = x;
				break;
			}
		}
			if (x != haystack)
				return (x);
	}
		haystack++;
	}
	return (0);
}
