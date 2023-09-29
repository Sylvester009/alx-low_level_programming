#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *byte = (char *) &x;

	return (*byte);
}
