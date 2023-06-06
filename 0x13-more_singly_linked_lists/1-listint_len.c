#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - write all the element of the number n  in the linked list
 * @h: print out all the linked listint_t  to traverse
 *
 * Return: print out the pointer of nodes in the listint_t
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
