#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: pointer to the listint_t list
* Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *nextz;

if (head == NULL)
return;

while (*head != NULL)
{
nextz = (*head)->next;
free(*head);
*head = nextz;
}
*head = NULL;
}
