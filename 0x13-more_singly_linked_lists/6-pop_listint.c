#include <stdlib.h>
#include "lists.h"

/*
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the listint_t list
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
