#include "main.h"
/**
 * print_chessboard - prints out a chessboard
 * @a: chessboard to print, 2D array [8] columns
 * Return: always void
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	while (y < 8)
	{
		x = 0;
		while (x < 8)
			_putchar(a[y][x++]);
		_putchar('\n');
		y++;
	}
}
