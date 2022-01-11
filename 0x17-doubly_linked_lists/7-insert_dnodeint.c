#include "lists.h"
/**
* insert_dnodeint_at_index-inserts a new node at a given position.
* @h: head of the list
* @n: number
* @idx: position
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *prev = NULL;
	dlistint_t *current = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx > dlistint_len(current))
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (idx == dlistint_len(current))
	{
		return (add_dnodeint_end(h, n));
	}
	while (current != NULL)
	{
		if (i == idx)
		{
			prev = current->prev;
			new_node->next = current;
			new_node->prev = prev;
			prev->next = new_node;
			current->prev = new_node;

			return (new_node);
		}
		current = current->next;
		++i;
	}

	return (NULL);
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
