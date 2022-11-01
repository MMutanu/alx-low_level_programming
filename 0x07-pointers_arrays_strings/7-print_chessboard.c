/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
*/
void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	y = 0;
	while (x < 64)
	{
		if (x % 8 == 0 && x != 0)
		{
			y = x;
			_putchar('\n');
		}

		_putchar(a[x / 8][x - y]);
		x++;
	}
	_putchar('\n');
}
