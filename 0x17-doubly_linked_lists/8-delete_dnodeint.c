#include "lists.h"

/**
 * dlistint_len - finds number of nodes in a doubly linked dlistint_t list
 * @h: a doubly linked dlistint_t list
 *
 * Return: number of nodes in h
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

/**
 * get_dnodeint_at_index - finds a node at index `index` in a dlistint_t list
 * @head: a doubly linked dlistint_t list
 * @index: index of node to be found. Index starts from 0
 *
 * Return: pointer to node at index or NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index && head; i++)
		head = head->next;

	return (head);
}

/**
 * delete_dnodeint_at_index - deletes a node at index `index` from
 *			a dlistint_t linked list pointed by head
 * @head: a pointer to a doubly linked dlistint_t list
 * @index: index of node to be deleted
 *
 * Return: 1 if successful or -1 if failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len;
	dlistint_t *temp;

	if (!head || !(*head))
		return (-1);
	while (index >= (len = dlistint_len(*head)))
		return (-1);
	temp = get_dnodeint_at_index(*head, index);
	if (index == 0)
	{
		*head = temp->next ? temp->next : NULL;
		if (temp->next)
			(temp->next)->prev = NULL;
	}
	else if (index == len - 1)
	{
		(temp->prev)->next = NULL;
	}
	else
	{
		(temp->prev)->next = temp->next;
		(temp->next)->prev = temp->prev;
	}
	free(temp);

	return (1);
}
