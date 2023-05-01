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

	char address[1024], temp[16];

	if (!head)
		return (NULL);

	sprintf(address, "%p", (void *)head);
	while (head)
	{
		sprintf(temp, "%p", (void *)head->next);
		if (strstr(address, temp))
			return (head->next);

		head = head->next;
		strcat(address, temp);
	}
	if (!head)
		return (NULL);

	return (head);
}
