#include "lists.h"

/**
 * free_listint -  Frees a listint_t list.
 * @head: a listint_t list to be freed.
 *
*/
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
	}

	free(head);
}
