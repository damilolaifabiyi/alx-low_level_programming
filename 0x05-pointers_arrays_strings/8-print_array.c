#include <stdio.h>
#include "main.h"
/**
 * print_array - Print an array up to n.
 * @a: array used
 * @n: number of the array
 * Description: a function that prints n elements of an array of integers
 */

void print_array(int *a, int n)
{
	int y;

	y = 0;
	for (n--; n >= 0; n--, y++)
	{
		printf("%d", a[y]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

