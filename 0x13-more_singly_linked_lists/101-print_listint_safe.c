#include "lists.h"

/**
 * print_listint_safe - Prints a linked list while handling loops.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
		count++;
	}

	if (slow == NULL || fast == NULL || fast->next == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}

	return (count);
}
