#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a list
  * @head: linked type list
  * @index: index
  *
  * Return: return NULL if the node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *temp = head;

	while (temp && l < index)
	{
		temp = temp->next;
		l++;
	}

	return (temp ? temp : NULL);
}
