/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int z = 0;

	while (dest[x] != '\0')
		x++;

	while (src[z] != '\0')
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[x] = '\0';

	return (dest);
}

