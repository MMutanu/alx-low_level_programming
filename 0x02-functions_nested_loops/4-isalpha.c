#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: Function that checks for lowercase characters
 *
 *@c: The character to check
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);

	else

		return (0);
}
