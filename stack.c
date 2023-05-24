#include "monty.h"
#include <stdlib.h>

/**
 * _stack - changes the struct to a stack
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void _stack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;

	_mode(STACK, WRITE);
}
