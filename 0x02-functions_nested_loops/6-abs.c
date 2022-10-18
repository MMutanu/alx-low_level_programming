#include"main.h"

/**
 * _abs - is a function that computes the absolute
 *       value of an integer
 *
 * @n: gets in an integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
