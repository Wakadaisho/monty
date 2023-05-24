#include "monty.h"
#include <stdlib.h>

/**
 * peek_queue - add a new node at the end of a stack_t list
 * @head: doubly linked list to add to
 * Return: value at the front of the queue
 */
int peek_queue(stack_t *head)
{
	return (head->n);
}

/**
 * peek_stack - add a new node at the beginning of a stack_t list
 * @head: doubly linked list to add to
 * Return: value top of the stack
 */
int peek_stack(stack_t *head)
{
	return (head->n);
}

/**
 * peek - returns the value at the top of the stack or front of queue
 * @stack: stack/queue data structure
 * Return: integer
 */
int peek(stack_t **stack)
{
	if (_mode(0, READ) == STACK)
		return (peek_stack(*stack));
	else
		return (peek_queue(*stack));
}
