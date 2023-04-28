#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a list_t list.
 *
*/
void free_list(list_t *head)
{
	while (head->next)
	{
		free(head->str);
		head = head->next;
	}

	free(head);
}
