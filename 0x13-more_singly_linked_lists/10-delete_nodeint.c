#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index of a linked list
  * @head: linked list type
  * @index: index
  *
  * Return: 1 if succeed, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = *head;
	listint_t *actual = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}

	actual = temp->next;
	temp->next = actual->next;
	free(actual);

	return (1);
}
