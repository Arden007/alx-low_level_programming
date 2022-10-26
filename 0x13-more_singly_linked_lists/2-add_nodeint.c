#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 *              beginning of a list
 *
 * @head: pointer to the first node(headnode)
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

if (head == NULL)
{
return (NULL);
}

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;

*head = newNode;
return (newNode);
}
