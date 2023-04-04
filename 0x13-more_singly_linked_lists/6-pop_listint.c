#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 *
 * @head: A pointer to a pointer to the first node in the list.
 *
 * Return: the head node’s data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (head == NULL || *head == NULL)
return (0);
temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
return (data);
}

