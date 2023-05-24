#include "monty.h"
#include <stdlib.h>

/**
 * rotr_queue - rotates queue to the bottom
 * @head: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void rotr_queue(stack_t **head, unsigned int line_number)
{
	int i;

	if (head == NULL || *head == NULL)
		return;

	_mode(STACK, WRITE);
	i = peek(head);
	pop(head, line_number);
	_data(i, WRITE);
	_mode(QUEUE, WRITE);
	push(head, line_number);
}

/**
 * rotr_stack - rotates stack to the bottom
 * @head: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void rotr_stack(stack_t **head, unsigned int line_number)
{
	int i;

	if (head == NULL || *head == NULL)
		return;

	_mode(QUEUE, WRITE);
	i = peek(head);
	pop(head, line_number);
	_data(i, WRITE);
	_mode(STACK, WRITE);
	push(head, line_number);
}

/**
 * rotr - rotates stack/queue to the bottom
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (_mode(0, READ) == STACK)
		rotr_stack(stack, line_number);
	else
		rotr_queue(stack, line_number);
}
