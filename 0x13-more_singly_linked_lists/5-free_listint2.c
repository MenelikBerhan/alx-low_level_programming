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

/**
 * free_listint2 -  Frees a listint_t list and sets the head to NULL.
 * @head: a pointer to a listint_t list to be freed.
 *
*/
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
