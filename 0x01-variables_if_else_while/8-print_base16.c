#include <stdio.h>
/**
 * main - block
 * Description: Print all single digit numbers of base ten.
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit < 10; digit++)
		putchar((digt % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
