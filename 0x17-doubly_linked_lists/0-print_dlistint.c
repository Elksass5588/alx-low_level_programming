#include "lists.h"

/**
 * print_dlistint - prints
 * @h: pointer
 * Return: num
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t c = 0;

	while (node)
	{
		printf("%i\n", node->n);
		c++;
		node = node->next;
	}

	return (c);
}
