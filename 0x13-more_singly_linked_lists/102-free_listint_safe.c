#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list while handling loops.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			break;
		}

		free(temp);
	}
	*h = NULL;

	return (count);
}
