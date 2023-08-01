#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - frees a looped list
 * @head: A pointer to the head
 * Return: size of list freed
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *start, *end;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	start = head->next;
	end = (head->next)->next;

	while (end)
	{
		if (start == end)
		{
			start = head;
			while (start != end)
			{
				nodes++;
				start = start->next;
				end = end->next;
			}

			start = start->next;
			while (start != end)
			{
				nodes++;
				start = start->next;
			}

			return (nodes);
		}

		start = start->next;
		end = (end->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees listint_t list
 * @h: A pointer to the address
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
