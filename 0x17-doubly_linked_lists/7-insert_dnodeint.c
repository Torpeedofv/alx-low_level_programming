#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (index = 0)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
	} else
	{
		while (i < idx)
		{
			curr = *h;
			curr = curr->next;
			i++;

			if (curr == NULL)
				return (NULL);
		}
	}
	curr->next = new;
	new->prev = curr;
	
	return (curr);
}
