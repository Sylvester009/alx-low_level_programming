#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to the first node in the list
* @idx: index where the new node shuold be added
* @n: data to insert in the new node
*
* Return:  the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *nextz;
listint_t *current = *head;

if (idx == 0)
{
nextz = malloc(sizeof(struct listint_t));
if (nextz == NULL)
{
return (NULL);
}
nextz->n = n;
nextz->next = *head;
*head = nextz;

return (nextz);
}
else if (*head == NULL)
{
return (NULL);
}
for (i = 0; current && i < idx; i++)
{
if (i == idx - 1)
{
nextz->next = current->next;
current->next = nextz;
return (nextz);
}
else
current = current->next;
}

return (NULL);
}
