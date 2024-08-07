#include "lists.h"
/**
* free_listint2 - Frees the second linked list
* @head: points to head of the list
*
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}

