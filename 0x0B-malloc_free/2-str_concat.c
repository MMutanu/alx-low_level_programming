#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL
*/

char *str_concat(char *s1, char *s2)
{
	int m = 0, n = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*find length of str1 & str2*/
	while (s1[m] != '\0')
		m++;
	while (s2[n] != '\0')
		n++;

	/*+1 for our end of string character*/
	s = malloc((m * sizeof(char)) + ((n + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	/*add the first string to array s*/
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	/*add the second string to array s*/
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}

	/*null terminate our new string*/
	s[i] = '\0';

	return (s);
}
