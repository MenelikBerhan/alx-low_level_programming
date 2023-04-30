#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: a pointer to a listint_t list.
 * @index: index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp_to_delet;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1 && temp->next; i++)
		temp = temp->next;
	if (i < index - 1)
		return (-1);

	temp_to_delet = temp->next;
	temp->next = temp_to_delet->next;
	free(temp_to_delet);

	return (1);
}
