#include "lists.h"

/**
 * print_listint - prints all elements of a list
 *
 * @h: list
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count_node = 1;

	/* return 0 as no of nodes when h is null*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*go to the next node*/
		h = h->next;
		/*count no of nodes*/
		node_count++;
	}

	/*print last node*/
	printf("%d\n", h->n);

	return (node_count);
}
