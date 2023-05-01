#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to a listint_t list.
 *
 * Return: a pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (!head || !(*head))
		return (NULL);

	temp2 = (*head)->next;
	(*head)->next = NULL;

	while (temp2)
	{
		temp1 = temp2->next;
		temp2->next = *head;
		*head = temp2;
		temp2 = temp1;
	}

	return (*head);
}
