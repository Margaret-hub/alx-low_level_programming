#include "lists.h"
/**
 * pop_listint - returns the address of first node
 * @head: address of first node
 * Return: returns data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *cur;
	int data_value;

	if (head == NULL || *head == NULL)
		return (0);
	cur = *head;
	data_value = (*head)->n;
	*head = (*head)->next;
	free(cur);
	return (data_value);
}
