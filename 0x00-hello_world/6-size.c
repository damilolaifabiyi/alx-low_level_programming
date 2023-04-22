#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the size of bytes.
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %li bytes(s)\n", sizeof(char));
	printf("Size of a int: %li bytes(s)\n", sizeof(int));
	printf("Size of a long int: %li bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %li bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %li bytes(s)\n", sizeof(float));

	return (0);
}
