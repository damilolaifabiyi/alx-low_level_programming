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

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
