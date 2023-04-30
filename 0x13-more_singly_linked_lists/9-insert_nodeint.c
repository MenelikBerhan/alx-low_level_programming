#include "lists.h"

/**
 * insert_nodeint_at_index - Creates a new node with data (n) and inserts it
 * at idx index. Index starts from 0.
 * @head: a pointer to a listint_t list.
 * @idx: index where the new node is to be inserted.
 * @n: n data field of new element to be created.
 *
 * Return: Rhe address of the new node, or NULL if it failed or
 * if idx is not a valid index and new node can not be added there.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	if (!head || (!(*head) && idx != 0))
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	temp = *head;

	for (i = 0; temp && temp->next && idx != 0 && (i < idx - 1); i++)
		temp = temp->next;

	if (i < (idx - 1) && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
	}
	else
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
