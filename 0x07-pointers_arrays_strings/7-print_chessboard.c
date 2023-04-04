#include "main.h"
/**
 * print_chessboard - outputs a chessboard
 * @a: pointer to chessboard pieces
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int ch, j;

	for (ch = 0; ch < 8; ch++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[ch][j]);
			_putchar('\n');
		}
	}
}
