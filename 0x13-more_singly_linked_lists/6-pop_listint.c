#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t list
* @head: pointer to the first element
*
* Return: the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
listint_t *nextz;
int data;

if (*head == NULL)
{
return (0);
}

data = (*head)->n;
nextz = (*head)->next;
free(*head);
*head = nextz;

return (data);
}
