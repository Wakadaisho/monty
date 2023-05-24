#include "monty.h"
#include <stdlib.h>

/**
 * queue - changes the struct to a queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;

	_mode(QUEUE, WRITE);
}
