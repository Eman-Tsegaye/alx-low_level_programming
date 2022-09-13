#include "lists.h"
#include<string.h>

/**
 * add_node-adds a node and inserts a string
 * @head:the head pointer
 * @str:string to be added
 * Return:a pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;

	list_t *temp = malloc(sizeof(list_t));

	while (str[len])
		len += 1;
	if (temp == NULL)
		return (NULL);
	temp->len = len;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
