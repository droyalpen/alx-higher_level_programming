#include "lists.h"
/**
 * is palindrome - checks if palindrome
 * Return: 0 if not , 1 if is
 */
int is_palindrome(listint_t **head)
{
	unsigned int len = 1;
	listint_t *temp;

	if (head ==NULL|| *head == NULL)
		return (1);

	temp = *head;
	while (temp) /* get len of list*/
	{
		temp = temp->next;
		len++;
	}
	return (0);
}
