#include <stdio.h>
#include <ctype.h>
/**
 * main - block
 * Description: Print the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

