#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - Counts the number of unique nodes
* in a looped listint_t list.
* @head: A pointer to the head of the listint_t to check.
*
* Return: If the list is not looped - 0.
*/

size_t looped_listint_len(const listint_t *head)
{
const listint_t *slow, *fast;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

slow = head->next;
fast = head->next->next;

while (fast && fast->next)
    {
        if (slow == fast)
        {
            slow = head;
            do {
                nodes++;
                slow = slow->next;
                fast = fast->next;
            } while (slow != fast);

            return (nodes);
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes;
    size_t index;

  nodes = looped_listint_len(head);

    for (index = 0; index < nodes || (index == nodes && printf("-> ")); index++)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
    }

    return (nodes);
}
