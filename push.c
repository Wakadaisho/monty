#include "monty.h"
#include <stdlib.h>

/**
 * push_queue - add a new node at the end of a stack_t list
 * @head: doubly linked list to add to
 * @n: data to add to node
 * Return: the new node address, NULL if failed
 */
stack_t *push_queue(stack_t **head, const int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *h = *head;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		_error(EXIT_FAILURE, WRITE);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	while (h && h->next)
		h = h->next;
	if (h)
	{
		h->next = new_node;
		new_node->prev = h;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	return (new_node);
}

/**
 * push_stack - add a new node at the beginning of a stack_t list
 * @head: doubly linked list to add to
 * @n: data to add to node
 * Return: the new node address, NULL if failed
 */
stack_t *push_stack(stack_t **head, const int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		_error(EXIT_FAILURE, WRITE);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}

/**
 * push - adds node to a stack or queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (_mode(0, READ) == STACK)
		push_stack(stack, _data(0, READ));
	else
		push_queue(stack, _data(0, READ));
}
