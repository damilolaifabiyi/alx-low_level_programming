#include "main.h"

/**
 * swap_int - a swap fuction for integers used
 * Description: a fuction that swaps integers
 * @a: input one
 * @b: input two
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
