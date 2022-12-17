#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - locates a given node of dlistint_t list.
 * @head: a pointer to the head of the list.
 * @index: the index of the node to locate.
 *
 * Return: the located node or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head != NULL)
	{
		while (i < index)
		{
			head = head->next;
			i++;
		}
	} else
	{
		return (NULL);
	}
	return (head);
}
