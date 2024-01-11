#include "lists.h"

/**
 * sum_dlistint -  Sums all the data (n) of a dlistint_t linked list.
 * @head: The head of the list.
 *
 * Return: 0, if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
