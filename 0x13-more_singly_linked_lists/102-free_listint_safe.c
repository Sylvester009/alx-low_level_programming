#include "lists.h"

/**
* free_listint_safe - frees a listint_t list safely.
* @h: pointer to the first node in the list
*
* Returns: the size of the list that was free'd
* The function sets the head to NULL
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *nextz;
size_t size = 0;

while (current != NULL)
{
size++;

nextz = current->next;

if (nextz >= current)
{
free(current);
*h = NULL;
break;
}

free(current);
current = nextz;
}
return (size);
}
