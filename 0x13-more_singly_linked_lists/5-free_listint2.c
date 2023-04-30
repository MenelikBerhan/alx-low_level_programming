#include "lists.h"

/**
 * free_listint2 -  Frees a listint_t list and sets the head to NULL.
 * @head: a pointer to a listint_t list to be freed.
 *
*/
void free_listint2(listint_t **head)
{
	if ((*head)->next)
	{
		free_listint2(&(*head)->next);
	}

	free(*head);
	*head = NULL;
}
