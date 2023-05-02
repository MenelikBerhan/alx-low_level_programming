#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * find_listint_loop - Checks if a loop exists in a listint_t list head.
 * @head: a listint_t list.
 *
 * Return: A pointer to a node at the start of a loop , or NULL otherwise.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *start;

	if (!head)
		return (NULL);

	start = head;
	while (head)
	{
		temp = start;
		while (1)
		{
			if (head->next == temp)
				return (head->next);
			if (temp == head)
				break;
			temp = temp->next;
		}

		head = head->next;
	}

	return (NULL);
}
