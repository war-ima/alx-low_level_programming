#include "main.h"
/**
 * print_chessboard - print a chessboard.
 * @a: 
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int l, m;

	for (l = 0; l <= 7; l++)
	{
		for (m = 0; m <= 7; m++)
		{
			_putchar(a[l][m]);
		}
		_putchar('\n');
	}
}
