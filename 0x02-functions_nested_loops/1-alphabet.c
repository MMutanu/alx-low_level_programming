#include "main.h"
/**
 * print_alphabet-entry point
 * description: print_alphabet is  a program that prints lowercase alphabet
 * Return: 0
 **/

void print_alphabet(void)
{
	char alphab;

	alphab = 'a';

	while (alphab <= 'z')
	{
		_putchar(alphab);
		alphab++;
	}
	_putchar('\n');
}
