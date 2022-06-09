#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
