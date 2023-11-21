#include "lists.h"

/**
* reverse_listint - reverses a listint_t list
* @head: pointer to the first node in the list
*
* Return: pointer to the first node in the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *nextz = NULL;

while (*head != NULL)
{
nextz = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = nextz;
}

*head = prev;

return (*head);
}
