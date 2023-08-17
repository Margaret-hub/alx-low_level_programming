#include "lists.h"

/**
 * print_dlistint - a function that prints elements of a dlistint
 * @h: pointer to a dlistint_t
 *
 * Return: Pointer to a dlistint_t
 */
size_t print_dlistint(const dlistint_t *h)

{
	size_t num = 0;

	if (!h)
		return (0);

	while (h->prev)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
		return (num);
}
