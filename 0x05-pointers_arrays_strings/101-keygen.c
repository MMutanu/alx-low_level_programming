#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main ()
{
	char ascii[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-={}[]:><,.~";
	int res, index;

	srand(time(NULL));
	res = 0;
	while (res <  2772 - 122) {
		index = rand() % 86; /*the length of the array is 62*/
		res += ascii[index];
		printf("%c", ascii[index]);
	}

	printf("%c", 2772 - res);

	return (0);
}
