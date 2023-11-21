#include "lists.h"

/**
* delete_nodeint_at_index -  deletes the node at index
* of a listint_t linked list.
* @head: pointer to the first element in the list
* @index: index of the node to delete
*
* Return: 1 if (Success), or -1 if (Fail)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = *head;
listint_t *prev = NULL;

if (!head || !*head)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}

prev = temp->next;
temp->next = prev->next;
free(prev);
return (1);
}
