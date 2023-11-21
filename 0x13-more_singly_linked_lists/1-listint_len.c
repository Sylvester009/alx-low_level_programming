#include "lists.h"

/**
* listint_len - function for number of elements in a listint_t list.
* @h: linked list of type listint_t 
* Return: number of elements in linked list
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
current = current->next;
count++;
}
return (count);
}
