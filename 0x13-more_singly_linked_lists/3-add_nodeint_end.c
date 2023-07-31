#include "lists.h"

/**
  * add_nodeint_end - adds new node at the end of a list
  * @head: pointer to a list type
  * @n: a constant of list number
  *
  * Return: The address of the new element, NULL if it fail
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *st;
	listint_t *temp = *head;

	st = malloc(sizeof(listint_t));
	if (!st)
		return (NULL);

	st->n = n;
	st->next = NULL;

	if (*head == NULL)
	{
		*head = st;
		return (st);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = st;

	return (st);
}
