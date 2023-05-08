#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int z, x, y;

	x = 0;
	y = 0;
	for (z = 0; z < (size * size); z += size + 1)
		x += a[z];
	for (z = size - 1; z < (size * size - 1); z += size - 1)
		y += a[z];
	printf("%d, %d\n", x, y);
}
