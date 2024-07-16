
 29 changes: 29 additions & 0 deletions29  
0x17-doubly_linked_lists/0-print_dlistint.c
@@ -0,0 +1,29 @@
#include "lists.h"

/**
 * print_dlistint - prints elements of list.
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
