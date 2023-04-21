#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
 * main - main block
 * Description: Assign a random number to the
 * variable n each time it is executed
 * positive, negative or zero
 * Return: Always 0(success)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastdigit == 0)
	{
		printf("lastdigit of %d is %d and is 0\n", lastdigit, n);
	}
		else if (lastdigit > 5)
	{
			printf("lastdigit of %d is %d and is greater than 5\n", lastdigit, n);
	}
		else if (lastdigit > 0 < 6)
	{
		printf("lastdigit of %d is %d and is less than 6 and not 0\n", lastdigit, n);
	}
	return (0);
}
