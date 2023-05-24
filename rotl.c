#include "monty.h"
#include <stdlib.h>

/**
 * rotl_queue - rotates queue to the top
 * @head: stack/queue data structure
 * @line_number: current line number
 * return: void
 */
void rotl_queue(stack_t **head, unsigned int line_number)
{
	int i;

	if (head == NULL || *head == NULL)
		return;

	i = peek(head);
	pop(head, line_number);
	_mode(STACK, WRITE);
	_data(i, WRITE);
	push(head, line_number);
	_mode(QUEUE, WRITE);
}

/**
 * rotl_stack - rotates stack to the top
 * @head: stack/queue data structure
 * @line_number: current line number
 * return: void
 */
void rotl_stack(stack_t **head, unsigned int line_number)
{
	int i;

	if (head == NULL || *head == NULL)
		return;

	i = peek(head);
	pop(head, line_number);
	_mode(QUEUE, WRITE);
	_data(i, WRITE);
	push(head, line_number);
	_mode(STACK, WRITE);
}

/**
 * rotl - rotates stack/queue to the top
 * @stack: stack/queue data structure
 * @line_number: current line number
 * return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (_mode(0, READ) == STACK)
		rotl_stack(stack, line_number);
	else
		rotl_queue(stack, line_number);
}
