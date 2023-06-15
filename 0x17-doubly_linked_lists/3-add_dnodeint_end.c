#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a pointer to a doubly linked dlistint_t list
 * @n: n field of the new node
 *
 * Return: the address of the new node or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	while (temp && temp->next)
		temp = temp->next;
	new_node->prev = temp;
	if (temp)
		temp->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
