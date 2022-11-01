#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, p;

	i = 0;
	p = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			p = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i - p]);
		i++;
	}
	_putchar('\n');
}
