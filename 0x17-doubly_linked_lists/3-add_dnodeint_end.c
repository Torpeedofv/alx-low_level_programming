#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of dlistint_t list.
 * @head: A pointer to the head of the list.
 * @n: The integer for the new node.
 *
 * Return: Null if the function fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if ((*head) == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	} else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
		new->prev = curr;
	}
	return (curr);
}
