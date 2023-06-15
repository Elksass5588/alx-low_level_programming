#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: pointer
 * @n: int to set
 * Return: address
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *now;

	now = malloc(sizeof(dlistint_t));
	if (now == NULL)
		return (NULL);

	now->n = n;
	now->prev = NULL;
	now->next = *head;
	if (*head)
		(*head)->prev = now;
	*head = now;

	return (now);
}
