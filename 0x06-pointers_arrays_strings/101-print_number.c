#include <main.h>
/**
 * digits - Numbers digits of a number
 * @n: Number
 * Return: Digits
 */
unsigned int digits(unsigned int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}

	return (i);
}

unsigned int pow_x10(unsigned int exponent)
{
	unsigned int res, i;

	res = 1;
	for (i = 1; i < exponent; i++)
	{
		res *= 10;
	}

	return (res);
}
