#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - Finds the node at index 'index' in
 * listint_t list head. Index is counted strarting from 0.
 * @head: a listint_t list.
 * @index: Index of node to be found.
 *
 * Return: A pointer to node at index `index`, or NULL if not found.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	temp = head;

	while (i < index && temp->next)
	{
		/* printf("i = %d, temp.n= %d\n", i, temp->n); */
		temp = temp->next;
		i++;
	}

	if (i < index)
		return (NULL);

	return (temp);
}
