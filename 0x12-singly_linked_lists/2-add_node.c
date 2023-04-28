#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a new node at the start of list_t list
 * @head: a pointer to a list_t list.
 * @str: the string value of the new node.
 *
 * Return: the address of the new element (Success),
 * or NULL (Failure).
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int len = 0;

	newNode = malloc(sizeof(size_t));
	if (!newNode)
		return (NULL);

	for (; str[len]; len++)
		continue;

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
