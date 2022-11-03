/**
 * _pow_recursion - a function that returns the value of x^y
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: the power of @x by @y
*/
int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)		/*return -1* if y is a negative number*/
	return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)	/*if y is an even number*/
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else			/*if y is odd*/
		return (x * _pow_recursion(x, y - 1));
}
