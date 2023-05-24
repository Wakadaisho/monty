#include "monty.h"

/**
 * swap - swap the top/front two elements in a stack/list
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int a, b;

	a = peek(stack);
	pop(stack, line_number);
	b = peek(stack);
	pop(stack, line_number);
	_data(a, WRITE);
	push(stack, line_number);
	_data(b, WRITE);
	push(stack, line_number);
}
