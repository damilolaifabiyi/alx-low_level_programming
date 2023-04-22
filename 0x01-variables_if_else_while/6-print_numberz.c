#include <stdio.h>
#include <ctype.h>
/**
 * main - block
 * Description: Print all single digit numbers of base ten.
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar((digt % 10) + '0');

	putchar('\n');

	return (0);
}
