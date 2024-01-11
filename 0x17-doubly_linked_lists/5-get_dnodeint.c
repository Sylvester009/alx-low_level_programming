#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 * @index: The node to get.
 *
 * Return: Null, if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
