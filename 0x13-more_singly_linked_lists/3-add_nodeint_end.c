#include "lists.h"

/**
* add_nodeint_end - adds a node at the end of a listint_t list
* @head: pointer to the first element in the list
* @n: data to insert into new element
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *current = *head;

newnode = malloc(sizeof(listint_t));
if (!newnode)
return (NULL);

newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
else
{
while (current->next != NULL)
{
current = current->next;
}
current->next = newnode;
}
return (newnode);
}

