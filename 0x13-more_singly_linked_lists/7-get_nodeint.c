#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node to locate - indices start at 0.
 *
 * Return: NULL if it doesn't exist. Otherwise the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node  < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
