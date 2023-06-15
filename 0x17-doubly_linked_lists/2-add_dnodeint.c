#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begining of a dlistint_t list
 * @head: a pointer to a doubly linked dlistint_t list
 * @n: n field of the new node
 *
 * Return: the address of the new node or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
