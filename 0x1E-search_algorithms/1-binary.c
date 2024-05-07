#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array of integers
* using the Binary search algorithm.
* @array: A pointer to the first element of the array.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: The index where value is located, or -1
*/

int binary_search(int *array, size_t size, int value)
{
size_t i, center, left = 0, right = size - 1;

if (array == NULL)
return (-1);

while (left <= right)
{
center = (left + right) / 2;

printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
}
printf("\n");

if (array[center] == value)
return (center);
else if (array[center] < value)
left = center + 1;
else
right = center - 1;
}
return (-1);
}
