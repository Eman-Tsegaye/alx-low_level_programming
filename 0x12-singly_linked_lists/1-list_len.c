#include "lists.h"
#include<stdio.h>
/**
 * list_len-prints contents of a linked list
 * @h:passed list head
 * Return:amount of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
return (count);
}
