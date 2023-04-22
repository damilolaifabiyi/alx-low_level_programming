#include <stdio.h>
#include <ctype.h>
/**
 * main - block
 * Description: Print the alphabet in lowercase and uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	putchar(alphabet);

	putchar('\n');

	return (0);
}
