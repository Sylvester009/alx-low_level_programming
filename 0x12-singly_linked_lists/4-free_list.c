#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t list to be freed
 * Return: void
 */

void free_list(list_t *head)
{
list_t *temp = head;
while (head != NULL)
{
head = head->next;
free(temp->str);
free(temp);
}
}
