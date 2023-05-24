#include "monty.h"

/**
 * pall_queue - prints all elements of a doubly linked list
 * @head: stack/queue data structure
 * Return: void
 */
void pall_queue(stack_t *head)
{
	if (head == NULL)
		return;

	printf("%i\n", head->n);
	pall_queue(head->next);
}

/**
 * pall_stack - prints all elements of a doubly linked list
 * @head: stack/queue data structure
 * Return: void
 */
void pall_stack(stack_t *head)
{
	if (head == NULL)
		return;

	printf("%i\n", head->n);
	pall_stack(head->next);
}

/**
 * pall - prints all elements of a doubly linked list
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (stack == NULL)
		return;
	if (_mode(0, READ) == STACK)
		pall_stack(*stack);
	else
		pall_queue(*stack);
}
