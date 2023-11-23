#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string of 0 and 1 chars
*
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int convert_b = 0;
if (b == NULL)
{
return (0);
}
while (*b != '\0')
{
if (*b == '0' || *b == '1')
{
convert_b = (convert_b << 1) + (*b - '0');
}
else
{
return 0;
}

b++;
}

return (convert_b);
}
