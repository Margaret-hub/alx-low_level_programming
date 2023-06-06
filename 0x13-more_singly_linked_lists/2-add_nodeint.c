#include "lists.h"
/**
 * add_nodeint - function that adds new node at the beginning of a list
 * @n: data content of the node
 * @head: pointer to the first node of the list
 * Return: head of the list if successfull and NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!head)
		*head = NULL;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
