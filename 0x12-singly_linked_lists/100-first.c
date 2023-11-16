#include "lists.h"
#include <stdio.h>

/**
* message - prints a sentence before the main
* Return: void
*/
void message(void) __attribute__ ((constructor));

void message(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
