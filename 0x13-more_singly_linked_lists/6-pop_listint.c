#include "lists.h"

/**
* pop_listint - deletes head node of linked list
* @head: head of the list
*
* Return: The data from the deleted node
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
