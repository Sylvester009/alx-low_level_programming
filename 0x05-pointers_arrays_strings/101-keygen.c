#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 *
 * Return: 0
 */

int main(void)
{
	int myrand;
	int c;
	int t;

	srand(time(NULL));

	for (c = 0, t = 2772; t > 122; c++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		t -= myrand;
	}
	printf("%c", t);

	return (0);
}
