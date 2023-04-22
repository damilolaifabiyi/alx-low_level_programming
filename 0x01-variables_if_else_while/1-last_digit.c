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
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last);
	}
	else
	{	
		if (last > 5)
	{
			printf("last digit of %d is %d and is greater than 5\n",n,  last);
	}
		else if (last < 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", last, n);
	}
	return (0);
}