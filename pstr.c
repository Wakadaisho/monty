#include "monty.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * pstr_queue - add a new node at the end of a stack_t list
 * @head: doubly linked list to add to
 * Return: value at the front of the queue
 */
int pstr_queue(stack_t *head)
{
	if (head == NULL || (head->n <= 0 || head->n > 127))
		return (0);

	return (printf("%c", head->n) + pstr_queue(head->next));
	/* return (pstr_queue(head->next) + printf("%c", head->n)); */
}

/**
 * pstr_stack - add a new node at the beginning of a stack_t list
 * @head: doubly linked list to add to
 * Return: value top of the stack
 */
int pstr_stack(stack_t *head)
{
	if (head == NULL || (head->n <= 0 || head->n > 127))
		return (0);
	return (printf("%c", head->n) + pstr_stack(head->next));
}

/**
 * pstr - returns the value at the top of the stack or front of queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (_mode(0, READ) == STACK)
		pstr_stack(*stack);
	else
		pstr_queue(*stack);
	printf("\n");
}
