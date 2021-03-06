#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node to singly linked list
 * @head: pointer to head of singly linked list
 * @n: value of list
 *
 * Return: address of new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return ((*head));
}
