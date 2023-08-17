#include "lists.h"

static dlistint_t *new_node(const int n);

/**
 * add_dnodeint_end - adds a new node at the end of a dlinked list
 * @head: pointer to a pointer of a linked list
 * @n: value to give to new node
 *
 * Return: a pointer to the newly added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new;

	if (*head)
	{
		node = *head;
		while (node->next)
			node = node->next;
		new = new_node(n);
		if (!new)
			return (NULL);
		node->next = new;
		node->next->prev = node;
	}
	else
	{
		node = new_node(n);
		if (!node)
			return (NULL);
		*head = node;
	}
	return (node);
}


/**
 * new_node - creates a new node and asigns it a value
 * @n: value of the new node
 *
 * Return: new node.
 */
static dlistint_t *new_node(const int n)

{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	return (new);
}
