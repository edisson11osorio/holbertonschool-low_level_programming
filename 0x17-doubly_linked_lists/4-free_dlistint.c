#include "lists.h"
/**
* free_dlistint- frees a dlistint_t lis
* @head: head of the list
* Return: frees list of elements
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
