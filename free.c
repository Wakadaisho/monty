#include <stdlib.h>
#include "monty.h"

/**
 * _free - free a doubly linked list
 * @head: doubly linked list to free
 * Return: void
 */
void _free(stack_t *head)
{
	stack_t *tmp, *p = head;

	while (p)
	{
		tmp = p;
		p = p->next;
		free(tmp);
	}
}

