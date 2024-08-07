#include "lists.h"
/**
* add_nodeint - adds a node to the beginning of a linked list
* @head: pointer to header on the list
* @n: new data added to node
*
* Return: pointer to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
