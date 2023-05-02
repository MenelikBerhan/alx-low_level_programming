#include "lists.h"

/**
 * free_listint_safe -  Frees a listint_t list and sets the head to NULL.
 * It can free lists with a loop by going through the list only once.
 * @h: a pointer to a listint_t list to be free'd.
 *
 * Return: the size of list free'd.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *loop_start, *temp;
	int loop = 0, len = 0;

	if (!h || !(*h))
		return (0);

	loop_start = loop_ptr(h);

	while (*h && (!loop || *h != loop_start))
	{
		if (*h == loop_start)
			loop = 1;
		temp = *h;
		*h = (*h)->next;
		free(temp);
		len++;
	}
	*h = NULL;
	return (len);
}

/**
 * loop_ptr - Checks if a loop exists in a listint_t list pointed by h.
 * @h: a pointer to a listint_t list.
 *
 * Return: A pointer to a node at the start of a loop , or NULL otherwise.
*/
listint_t *loop_ptr(listint_t **h)
{
	listint_t **ptrs, *temp, *loop_start;
	int i = 0, j, size = 10;

	if (!h || !(*h))
		return (NULL);

	ptrs = malloc(sizeof(listint_t) * size);
	if (!ptrs)
		return (NULL);

	ptrs[i++] = *h;
	temp = *h;
	while (temp && temp->next)
	{
		for (j = 0; j < i; j++)
		{
			if (temp->next == ptrs[j])
			{
				loop_start = ptrs[j];
				free(ptrs);
				return (loop_start);
			}
		}

		if (i == size)
		{
			size = i * 2;
			ptrs = realloc(ptrs, (sizeof(listint_t) * size));
			if (!ptrs)
				return (NULL);
		}

		ptrs[i++] = temp->next;
		temp = temp->next;
	}
	free(ptrs);
	return (NULL);
}
