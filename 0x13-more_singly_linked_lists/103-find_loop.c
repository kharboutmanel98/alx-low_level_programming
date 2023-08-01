#include "lists.h"

/**
 * find_listint_loop - finding the loop in a linked list.
 * @head: A pointer to the head
 * Return: If there is no loop - NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *end;

	if (head == NULL || head->next == NULL)
		return (NULL);

	start = head->next;
	end = (head->next)->next;

	while (end)
	{
		if (start == end)
		{
			start = head;

			while (start != end)
			{
				start = start->next;
				end = end->next;
			}

			return (start);
		}

		start = start->next;
		end = (end->next)->next;
	}

	return (NULL);
}
