#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to the first node in the list
* @idx: index where the new node should be added
* @n: data to insert in the new node
*
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node;
listint_t *current = *head;

if (!head)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; current && i < idx - 1; i++)
{
current = current->next;
}
if (!current)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}
