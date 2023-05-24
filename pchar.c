#include "monty.h"
#include <stdlib.h>

/**
 * pchar_queue - returns the value at the top of the stack or front of queue
 * @head: doubly linked list to add to
 * Return: value at the front of the queue
 */
int pchar_queue(stack_t *head)
{
	return (head->n);
}

/**
 * pchar_stack - returns the value at the top of the stack or front of queue
 * @head: doubly linked list to add to
 * Return: value top of the stack
 */
int pchar_stack(stack_t *head)
{
	return (head->n);
}

/**
 * pchar - returns the value at the top of the stack or front of queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	printf("%c\n", peek(stack));
}
