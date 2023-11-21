#include "lists.h"

/**
* free_listint_safe - frees a listint_t list
* @h: pointer to the first node in the linked list
*
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
int nextz;
listint_t *current;

if (!h || !*h)
return (0);

while (*h)
{
nextz = *h - (*h)->next;
if (nextz > 0)
{
current = (*h)->next;
free(*h);
*h = current;
size++;
}
else
{
free(*h);
*h = NULL;
size++;
break;
}
}
*h = NULL;

return (size);
}
