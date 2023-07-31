#include "lists.h"

/**
  * reverse_listint - reverse a linked list
  * @head: linked list type
  *
  * Return: return a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *move = NULL;

	while (*head)
	{
		move = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = move;
	}

	*head = back;

	return (*head);
}

