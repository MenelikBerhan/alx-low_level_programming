#include "lists.h"

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
