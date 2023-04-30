#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: a pointer to a listint_t list.
 *
 * Return: the n data field of the deleted head node, or
 * 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !(*head))
		return (0);

	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	free(temp);
	return (i);
}
