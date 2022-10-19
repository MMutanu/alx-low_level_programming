#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers 0-9 using putchar; use int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to a representation of ASCII*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
