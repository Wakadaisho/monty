#include "monty.h"
#include <stdlib.h>

/**
 * pop_queue - remove node from a queue
 * @head: doubly linked list to add to
 * Return: value at the front of the queue
 */
int pop_queue(stack_t **head)
{
	stack_t *top = *head;
	int pop_value = top->n;

	top->prev = NULL;
	*head = top->next;
	free(top);
	return (pop_value);
}

/**
 * pop_stack - remove node from a stack
 * @head: doubly linked list to add to
 * Return: value top of the stack
 */
int pop_stack(stack_t **head)
{
	stack_t *top = *head;
	int pop_value = top->n;

	top->prev = NULL;
	*head = top->next;
	free(top);
	return (pop_value);
}

/**
 * pop - remove node from a stack of queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (_mode(0, READ) == STACK)
		pop_stack(stack);
	else
		pop_queue(stack);
}
