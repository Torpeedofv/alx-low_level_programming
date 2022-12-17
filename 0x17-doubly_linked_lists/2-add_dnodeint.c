#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a node to the head of the dlistint_t list.
 * @head: A pointer to the address of the head of the list.
 * @n: The integer the new node will contain.
 *
 * Return: The address of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	
	new->n = n;
	new->prev = NULL;

	if ((*head) == NULL)
	{
		new->next = NULL;
	} else {
	(*head)->prev = new;
	new->next = *head;
	}
	*head = new;


	return (*head);
}
