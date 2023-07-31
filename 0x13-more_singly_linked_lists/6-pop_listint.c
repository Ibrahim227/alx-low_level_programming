#include "lists.h"

/**
  * pop_listint - deletes the head node of a list
  * @head: linked type list
  *
  * Return: retun 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nb;

	if (!head || !*head)
		return (0);

	nb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nb);
}
