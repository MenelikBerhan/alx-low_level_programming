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
 * insert_dnodeint_at_index - inserts a new node with data(n) value of n
 *			at index `idx` in a dlistint_t doubly linked list
 * @h: a pointer to a doubly linked dlistint_t list
 * @idx: index where the new node is to be inserted
 * @n: data(n) value of new node
 *
 * Return: the address of the new node, or NULL if failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len;
	dlistint_t *new_node, *temp;

	if (!h || (!(*h) && idx != 0))
		return (NULL);
	while ((len = dlistint_len(*h)) < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h ? *h : NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temp = len == idx ? get_dnodeint_at_index(*h, idx - 1)
				: get_dnodeint_at_index(*h, idx);
	if (len == idx)
	{
		new_node->next = NULL;
		new_node->prev = temp;
		temp->next = new_node;
	}
	else
	{
		new_node->next = temp;
		new_node->prev = temp->prev;
		(temp->prev)->next = new_node;
		temp->prev = new_node;
	}
	return (new_node);
}
