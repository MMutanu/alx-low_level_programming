#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*prints lowercase a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	/*prints uppercase A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
