#include "main.h"
#include <stdio.h>

/**
 * factorial- this function returns the factorial of a given number.
 *
 * @n: a positive number
 *
 * Return: length
*/

int factorial(int n)
{
	if (n < 0)		/*function should return -1 to indicate an error*/
		return (-1);
	else if (n == 0)	/*Factorial of 0 is 1*/
		return (1);
	else			/*return factorial of n if it is !<=0*/
		return (n * factorial(n - 1));
}
