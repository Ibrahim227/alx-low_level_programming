#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: linked list type
  * @idx: index
  * @n: node number
  *
  * Return: returns the address of the new node or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *stz;
	unsigned int k = 0;

	stz = malloc(sizeof(listint_t));
	if (!stz || !head)
		return (NULL);

	stz->n = n;
	stz->next = NULL;

	if (idx == 0)
	{
		stz->next = *head;
		*head = stz;
		return (stz);
	}

	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			stz->next = temp->next;
			temp->next = stz;
			return (stz);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
