#include "lists.h"
/**
* delete_dnodeint_at_index - del a new node at a given position.
* @head: head of the list
* @index: position
* Return: the address of the new node, or NULL if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *next = NULL, *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index >= dlistint_len(*head))
		return (-1);

	if (index == 0)
	{
		next = current->next;
		if (current->next == NULL)
		{
			*head = NULL;
		}
		else
		{
			next->prev = NULL, *head = next, free(current);
		}
		return (1);
	}
	if (index == dlistint_len(current) - 1)
	{
		prev = current->prev, prev->next = NULL, free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (i++ == index)
		{
			prev = current->prev, next = current->next;
			prev->next = next, next->prev = prev, free(current);
			return (1);
		}
		current = current->next;
	}
	free(current);
	return (-1);
}

/**
* dlistint_len - retunr all the elements of a dlistint_t list
* @h: head of the list
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t leng = 0;

	while (h != NULL)
	{
		leng++;
		h = h->next;
	}
	return (leng);
}
