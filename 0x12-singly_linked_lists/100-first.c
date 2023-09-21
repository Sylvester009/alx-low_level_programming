#include <stdio.h>

void senc(void) __attribute__ ((constructor));

/**
 * senc - prints a sentence before the main
 */

void senc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
