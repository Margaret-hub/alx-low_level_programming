#include "lists.h"

/**
 *add_dnodeint - a function that adds a new node
 *                 at the beginning of a dlistint_t list.
 *
 *@head: pointer to head of list
 *@n: element to be added
 *
 *Return: address of added node,NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;

	if (head)
	{
		*head->prev = node;
	}
	node->next = *head;
	node->prev = NULL;
	*head = node;
	*head->next = node;

	return (node);
}
