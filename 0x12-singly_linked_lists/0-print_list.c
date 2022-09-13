#include<stdlib.h>
#include "lists.h"
/**
 * print_list-prints contents of a linked list
 * @h:passed list head
 * Return:amount of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count += 1;
	}
return (count);
}

